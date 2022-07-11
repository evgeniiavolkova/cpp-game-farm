#include "seed.h"

Seed::Seed()
{

}
Seed::Seed(QString name, int cost){
    m_name = name;
    m_cost = cost;
};

void Seed::setName(QString name){
    m_name = name;
};
void Seed::setCost(int cost){
   m_cost = cost;
};
QString Seed::getName(){
    return m_name;
};
int Seed::getCost(){
    return m_cost;
};


