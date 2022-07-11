#include "inventory.h"

Inventory::Inventory()
{}

std::vector<Seed*> Inventory::getInventory(){
    return m_seeds;
};
int Inventory::getCapacity(){
    return m_capacity;
};
void Inventory::setCapacity(int capacity){
    m_capacity = capacity;
};

void Inventory::setSeed(std::vector<Seed*> seedVector){
    m_seeds = seedVector;
};

void Inventory::read(const QJsonObject &json){

    if (json.contains("capacity") && json["capacity"].isDouble())
        m_capacity = json["capacity"].toInt();
    
    if (json.contains("seeds") && json["seeds"].isArray()){
        QJsonArray seedArray = json["seeds"].toArray();
        m_seeds.clear();
        m_seeds.reserve(seedArray.size());
        for (int seedIndex = 0; seedIndex < seedArray.size(); ++ seedIndex ){
            QJsonObject seedObject = seedArray[seedIndex].toObject();
            Seed seed;
            seed.setName(seedObject["name"].toString());
            seed.setCost(seedObject["cost"].toInt());
            m_seeds.push_back(&seed);      
        }
        
    }

};
void Inventory::write(QJsonObject &json){
    json["capasity"] = m_capacity;

    QJsonArray seedArray;
    foreach ( Seed* seed, m_seeds){
        QJsonObject seedObject;
        seedObject["name"] = seed->getName();
        seedObject["cost"] = seed->getCost();
        seedArray.append(seedObject);
    }
    json["seeds"] = seedArray;

};
