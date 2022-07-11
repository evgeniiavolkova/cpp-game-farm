#include "player.h"

Player::Player()
{

}

Inventory* Player::createBag(std::vector<Seed*>seedVector){
Inventory* bag = new Inventory();
bag->setSeed(seedVector);
m_bag = bag;
return bag;
};

void Player::setInventory(Inventory* bag){
    m_bag = bag;
};
Inventory* Player::getInventory(){
    return m_bag;
};

void Player::read(const QJsonObject &json){
    if (json.contains("name") && json["name"].isString())
        m_name = json["name"].toString();
    if (json.contains("money") && json["money"].isDouble())
        m_money = json["money"].toInt();
};

void Player::write(QJsonObject &json) const{
    json["name"] = m_name;
    json["money"] = m_money;
};

int Player::getPosition(){
    return m_playerPosition;
}
void Player::setPosition(int pos){
    m_playerPosition=pos;
}
int Player::getMoney(){
    return m_money;
};
