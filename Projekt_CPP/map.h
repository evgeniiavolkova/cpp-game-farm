#ifndef MAP_H
#define MAP_H
#include "slot.h"
#include <QObject>


class Map
{
private:
    int m_playerLocation;
    Slot* slot;
public:
    Map();
};

#endif // MAP_H
