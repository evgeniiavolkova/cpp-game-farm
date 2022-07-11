#include "gameengine.h"

GameEngine::GameEngine(QObject *parent) : QObject(parent)
{
m_player = new Player;
m_fields = FileManager::loadXml();
}
void GameEngine::game(){}
void GameEngine::newGame(){};
bool GameEngine::loadGame(QString fileName){
    QFile loadFile(fileName);
    if (!loadFile.open(QIODevice::ReadOnly)){
        qWarning("Couldnt open save file");
        return false;
    }
    QByteArray saveDate = loadFile.readAll();
    QJsonDocument loadDoc(QJsonDocument::fromJson(saveDate));

    read(loadDoc.object());
    return true;
};
bool GameEngine::saveGame(){
    QFile saveFile("save.json");
    if (!saveFile.open(QIODevice::WriteOnly)){
        qWarning("Couldnt open save file");
        return false;
    }

    QJsonObject gameObject;
    write(gameObject);
    QJsonDocument saveDoc(gameObject);
    saveFile.write(saveDoc.toJson());

    return true;
};
void GameEngine::read(const QJsonObject &json){

    if (json.contains("player") && json["player"].isObject())
        m_player->read(json["player"].toObject());

    if (json.contains("inventory") && json["inventory"].isObject()){
        m_player->createBag(m_seeds)->read(json["inventory"].toObject());


//    m_player->read(json["player"].toObject());
//    m_player->createBag()->read(json["inventory"].toObject());

        }
};
void GameEngine::write(QJsonObject &json) const{
    QJsonObject playerObject;
       m_player->write(playerObject);
       json["player"] = playerObject;


       QJsonObject inventoryObject;
          m_inventory->write(inventoryObject);
          json["inventory"] = inventoryObject;

};

void GameEngine::movePlayer(QString where){
if(where=="up" and m_position>19){
   m_position-=20;
   emit playerPositionChanged();
}
if(where=="down" and m_position<380){
    m_position+=20;
    emit playerPositionChanged();
}
if(where=="left" and m_position>0){
    m_position-=1;
    emit playerPositionChanged();
}
if(where=="right" and m_position<399){
   m_position+=1;
   emit playerPositionChanged();
    //zmenit hodnotu v xmlku na 1
}
qCritical() << m_position <<"\n";
}

QString GameEngine::getPlayerPosition(int index){
    if (index == m_position){
        return "s_Player";
    }
    else {
        return "s_Empty";
    }
}

int GameEngine::getFieldsAt(){
   return m_lastField;
}
std::vector<int> GameEngine::getFields(){
m_fields = FileManager::loadXml();
return m_fields;
}

QString GameEngine::getState(int index){

  if(m_fields.at(index)==1) return "s_Home";
  if(m_fields.at(index)==2) return "s_FarmField";
  if(m_fields.at(index)==3) return "s_Pumpkin";
  if(m_fields.at(index)==4) return "s_Carrot";
  if(m_fields.at(index)==5) return "s_PumpkinStageOne";
  if(m_fields.at(index)==6) return "s_PumpkinStageTwo";
  if(m_fields.at(index)==9) return "s_MarketSell";
  if(m_fields.at(index)==7) return "s_CarrotStageOne";
  if(m_fields.at(index)==8) return "s_CarrotStageTwo";
  if(m_fields.at(index)==10) return "s_MarketBuy";
  else return "s_Grass";
}

QString GameEngine::getBarState(int index){
   if (index == 0) return "s_Shovel";
   if (index == 1) return "s_PumpkinSeeds";
   if (index == 2) return "s_CarrotSeeds";
   if (index == 3) return "s_Pumpkin";
   if (index == 4) return "s_Carrot";
   if (index == 5) return "s_Sleep";
   else return "s_Sleep";
}

int GameEngine::getPositionNumber(){
    return m_position;
}


void GameEngine::setState(int index, int newValue){
    m_fields.at(index)=newValue;
    emit fieldChanged();
    emit playerPositionChanged();
}

void GameEngine::itemSlotClicked(int index){
    if (index == 0){
        if (getState(index) != "s_Home"){
            setState(index, 2);
        }
    }
}
void GameEngine::itemBarClicked(int index){
    if(index==0){
       shovelClicked();
    }
    else if(index==1){
        plantPumpkins();
    }
    else if(index==2){
        plantCarrots();
    }
    else if(index==3){
    sellPumpkin();
    }
    else if(index==4){
    sellCarrot();
    }
    else if(index==5){
        //go to sleep
        sleep();
    }
    else {
        std::cerr << "Error: did not log a slot index";

    }
    m_lastField++;
    emit fieldChanged();
}

void GameEngine::shovelClicked(){
    //std::vector<int>  field = getFields();
    if (m_fields.at(m_position)==1){
        //do nothing
    }
    else if (m_fields.at(m_position)==2){
        //turn farmfield to grass
        setState(m_position, 0);
    }
    else if (m_fields.at(m_position)==3){
        //harvest pumkin
        //-> add pumkin to inventory
        m_pumpkins++;
        //-> change pumkinfield to farmfield
        setState(m_position, 2);
        emit pumpkinChanged();
    }
    else if (m_fields.at(m_position)==4){
        //harvest carrot
        //-> add carrot to inventory
        m_carrots++;
        //-> change carrotfield to farmfield
        setState(m_position, 2);
        emit carrotChanged();
    }
    else {
        //change grass to farmfield
        setState(m_position, 2);
    }
}

void GameEngine::plantPumpkins(){

    //is the field im standing on a farmfield?
    if (m_fields.at(m_position)==2){
        //do i have pumpkin seeds available?
        if (m_pumpkinSeeds > 0){
            //remove 1 pumpkin seed from inventory
            m_pumpkinSeeds--;
            //notify inventory
            //notify screen
            //change from farmfield to stage one
            setState(m_position, 5);
            emit pumpkinSeedsChanged();
        }
    }
    if(m_fields.at(m_position)==10){
        if(m_money>=15){
           m_money -=15;
           m_pumpkinSeeds++;
           emit moneyChanged();
           emit pumpkinSeedsChanged();
        }
    }
}

void GameEngine::plantCarrots(){
    //is the field im standing on a farmfield?
    if (m_fields.at(m_position)==2){
        //do i have carrot seeds available?
        if (m_carrotSeeds > 0){
            //remove 1 carrot seed from inventory
            m_carrotSeeds--;
            //notify inventory
            //notify screen
            //change from farmfield to stage one
            setState(m_position, 7);
            emit carrotSeedsChanged();
        }
    }
    if(m_fields.at(m_position)==10){
        if(m_money>=10){
           m_money -=10;
           m_carrotSeeds++;
           emit moneyChanged();
           emit carrotSeedsChanged();
        }
    }
}
void GameEngine::sleep(){
    if(m_fields.at(m_position)==1){
    //change day to +1
        m_day++;
    emit dayChanged();
        //save game to files

        //grow seeds
        for (int i=0; i<400; i++){
                if (m_fields.at(i) == 8){
                    setState(i, 4);
                }
                else if (m_fields.at(i) == 7){
                    setState(i, 8);
                }
                else if (m_fields.at(i) == 6){
                    setState(i, 3);
                }
                else if (m_fields.at(i) == 5){
                    setState(i, 6);
                }
            }
//        for(int i = 0; i<400;i++){
// FileManager::writeToIndex(i, m_fields.at(i),"forSaving.xml");
//        }
        saveXML();
    }
}
void GameEngine::sellCarrot(){
    if (m_fields.at(m_position)==9){
        if(m_carrots>0){
            m_carrots--;
            m_money +=20;
           emit carrotChanged();
            emit moneyChanged();
        }
    }
}
void GameEngine::sellPumpkin(){
    if (m_fields.at(m_position)==9){
        if(m_pumpkins>0){
            m_pumpkins--;
            m_money +=30;
            emit pumpkinChanged();
            emit moneyChanged();
        }
    }
}

int GameEngine::getDay(){
    return m_day;
}
int GameEngine::getMoney(){

    return m_money;
}
int GameEngine::getPumpkinSeeds(){
    return m_pumpkinSeeds;
}
int GameEngine::getPumpkin(){
    return m_pumpkins;
}
int GameEngine::getCarrotSeeds(){
    return m_carrotSeeds;
}
int GameEngine::getCarrot(){
    return m_carrots;
}

void GameEngine::saveXML(){
    QFile file("/Users/evgeniavolkova/3 semestr/git_cpc/projekt-c-/Projekt_CPP/save.xml"); // переписать !!!! prepsat nazev
    if (file.open(QIODevice::WriteOnly)){
        QXmlStreamWriter writer;
        writer.setDevice(&file);
         writer.setAutoFormatting(true);
        writer.writeStartDocument();
        writer.writeStartElement("slot");

        for (int i = 0; i < 400; i++ ){
            writer.writeStartElement("field");
            writer.writeAttribute("index",QString::number(i));
            writer.writeCharacters(QString::number(m_fields.at(i)));
            writer.writeEndElement();
        }
        writer.writeEndElement();
        writer.writeEndDocument();
    } else {
        qCritical() << "Soubor se nepovedlo otevritttt\n";
    }
    file.close();

};








