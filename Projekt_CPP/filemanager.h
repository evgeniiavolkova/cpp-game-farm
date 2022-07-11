#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <gameengine.h>
#include <vector>
#include <player.h>
#include <inventory.h>
#include <iostream>
#include <QXmlStreamReader>
#include <QFile>
#include <QDebug>

class FileManager
{
private:
    std::string m_file;
    QString m_fileForSave;
public:
       FileManager();
       static std::vector<int>loadXml();
       void writeToXml(int index, int number);
       QString getSaveFile();

};

#endif // FILEMANAGER_H
