#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "inventory.h"
#include <QString>
#include <QJsonDocument>
#include <QJsonObject>


class Player
{
private:
    QString m_name;
    Inventory* m_bag;
    int m_money;
    int m_playerPosition=30;

public:
    Player();
    Player(QString name,int money);

    Inventory* createBag(std::vector<Seed*>seedVector);

    void setInventory(Inventory* bag);
    Inventory* getInventory();
    int getMoney();

    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;
    int getPosition();
    void setPosition(int pos);
};

#endif // PLAYER_H
