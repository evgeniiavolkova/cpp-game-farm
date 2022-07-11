import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 1500
    height: 900
    visible: true
    title: qsTr("Farm")

    GameMap{
        id:gameMap
        anchors.centerIn: parent
    }
    ItemBar{
        anchors{
            bottom: gameMap.top
            right: gameMap.right
        }
    }
    StatusBar{
        anchors{
            bottom: gameMap.top
            left: gameMap.left
        }
    }

    Item {
        anchors.fill: parent
        focus: true
        Keys.onPressed: function (event) {

            if (event.key === Qt.Key_Right) {
                gameEngine.movePlayer("right");
                event.accepted = true;
            }
            if (event.key === Qt.Key_Left) {
                gameEngine.movePlayer("left");
                event.accepted = true;
            }

            if (event.key === Qt.Key_Up){
                gameEngine.movePlayer("up");
                event.accepted = true;

            }
            if (event.key === Qt.Key_Down){
                gameEngine.movePlayer("down");
                event.accepted = true;
                console.log(String(gameEngine.getPlayerPosition))
                    }
            }
        }

    }



