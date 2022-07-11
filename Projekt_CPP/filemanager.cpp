#include "filemanager.h"

FileManager::FileManager()
{};

std::vector<int> FileManager::loadXml(){
    std::vector<int> slot(400, 0);

    QFile file(":/save.xml");
    if (file.open(QIODevice::ReadOnly)){

        QXmlStreamReader xmlReader;
        xmlReader.setDevice(&file);
        xmlReader.readNext();

        while(!xmlReader.isEndDocument()){

            if (xmlReader.isStartElement()){
                QString name = xmlReader.name().toString();
                if (name=="field"){

                    int index = xmlReader.attributes().value("index").toInt();
                    int slotContent = xmlReader.readElementText().toInt();
                    slot.at(index) = slotContent;
                } else if (name == "slot"){
                    // skip
                } else {
                    qCritical() << "Narazil jsem na element jiny nez field" << name <<"\n";
                }
            }
            // nactu dalsi element
            xmlReader.readNext();
        }
    } else {
        qCritical() << "Soubor se nepovedlo otevritttt\n";
    }


    return slot;
};

QString FileManager::getSaveFile(){
    return m_fileForSave;
};
//void FileManager::setFile(std::string fileForSave){
////    m_fileForSave = QString::fromStdString(fileForSave);
//    m_fileForSave = "/Users/evgeniavolkova/3 semestr/git_cpc/projekt-c-/Projekt_CPP/forSaving.xml";
//};




