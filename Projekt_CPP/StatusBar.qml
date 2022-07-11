import QtQuick 2.0

Rectangle {
width: 180
height: 60
radius: 5
color: "lightgray"
border.color: "gray"
Text {
    property int day: gameEngine.getDay
    id: dayCounter
    text:"Day: " + String(day)
    anchors.bottom: parent.bottom
    font {
        pixelSize: 20
        bold: true
         }
    }
Text {
    property int money: gameEngine.getMoney
    id: moneyCounter
    text:"Money: " + String(money)
    anchors.right: parent.right
    anchors.bottom: parent.bottom
    font {
        pixelSize: 20
        bold: true
         }
}
}
