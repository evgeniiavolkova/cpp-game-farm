import QtQuick 2.0

Rectangle {
    property int plotIndex: 0
    id: playerPlot
    width: 37
    height: 37
    color: "transparent"

    Image {
    id: playerImage
    source: "Images/player2.png"
    width: parent.width
    height: parent.height
    anchors.centerIn: parent
    }

    /*Connections{
    target: gameEngine
    function onPlayerPositionChanged(){
     state:if(gameEngine.getPositionNumber===index){
            return "s_Player";
             }
             else {
                 return "s_Empty";
             }//gameEngine.getPlayerPosition(index);

            }
    }*/
    states:[
        State{
            name: "s_Empty"
            PropertyChanges {
               target: playerImage
                opacity: 0
                 }

    },
        State{
                name: "s_Player"
                PropertyChanges {
                    target: playerImage
                    opacity: 100
                     }
            }
    ]
}
