#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <QObject>
#include <QFile>
#include <iostream>
#include <player.h>
#include <inventory.h>
#include <vector>
#include "filemanager.h"


class GameEngine : public QObject
{
        Q_OBJECT

    Q_PROPERTY(int getPositionNumber READ getPositionNumber  NOTIFY playerPositionChanged)

    Q_PROPERTY(int getFieldsAt READ getFieldsAt NOTIFY fieldChanged)
    Q_PROPERTY(int getMoney READ getMoney NOTIFY moneyChanged)
    Q_PROPERTY(int getDay READ getDay NOTIFY dayChanged)
    Q_PROPERTY(int getPumpkinSeeds READ getPumpkinSeeds NOTIFY pumpkinSeedsChanged)
    Q_PROPERTY(int getPumpkin READ getPumpkin NOTIFY pumpkinChanged)
    Q_PROPERTY(int getCarrotSeeds READ getCarrotSeeds NOTIFY carrotSeedsChanged)
    Q_PROPERTY(int getCarrot READ getCarrot NOTIFY carrotChanged)
public:

   explicit GameEngine(QObject *parent = nullptr);

    Q_INVOKABLE void game();
    Q_INVOKABLE  void movePlayer(QString where);
    Q_INVOKABLE QString getState(int index);
    Q_INVOKABLE QString getBarState(int index);
    Q_INVOKABLE void itemSlotClicked(int index);
    Q_INVOKABLE void itemBarClicked(int index);

    void newGame();
    bool loadGame(QString fileName);
    bool saveGame();
    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;
    std::vector<int> getFields();
    int getPositionNumber();
    void setState(int index, int newValue);
     int getFieldsAt();
     int getMoney();
     int getDay();
     int getPumpkinSeeds();
     int getPumpkin();
     int getCarrotSeeds();
     int getCarrot();
     void saveXML();
signals:
    void fieldsChanged();
    void playerPositionChanged();
    void fieldChanged();
    void dayChanged();
    void moneyChanged();
    void pumpkinSeedsChanged();
    void pumpkinChanged();
    void carrotSeedsChanged();
    void carrotChanged();

public slots:
    QString  getPlayerPosition(int index);

private:
    Player* m_player;
    std::vector<int> m_fields;
    std::vector<Seed*> m_seeds;
    Inventory* m_inventory;
    int m_pumpkinSeeds=5;
    int m_carrotSeeds=5;
    int m_pumpkins=0;
    int m_carrots=0;
    void shovelClicked();
    void plantPumpkins();
    void plantCarrots();
    void sleep();
    void sellCarrot();
    void sellPumpkin();
int m_position = 30;
int m_lastField=10;
int m_day =1;
int m_money = 0;
};

#endif // GAMEENGINE_H
