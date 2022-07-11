import QtQuick 2.0

Rectangle {
    property int slotIndex: 0
    id: itemSlot
    width: 60
    height: 60
    radius: 5
    color: "lightgray"
    border.color: "gray"
    opacity: 50

    Image {
            id: itemSlotImage
            source: ""
            width: parent.width
            height: parent.height
            anchors.centerIn: parent

            }
    Text {
        id: amount
        text:""
        anchors.centerIn: parent
        anchors.bottom: parent.bottom
        font {
            pixelSize: 20
            bold: true
             }
    }
    states:[
        State{
            name: "s_Shovel"
            PropertyChanges {
                target: itemSlotImage
                source: "Images/shovel.png"
            }
            PropertyChanges {
                target: amount
               text:""

            }


        },
        State{
            name: "s_PumpkinSeeds"
            PropertyChanges{
                target: itemSlotImage
                source: "Images/pumpkinseeds.png"
            }
            PropertyChanges {
                target: amount
               text:gameEngine.getPumpkinSeeds

            }
        },
        State{
            name:"s_CarrotSeeds"

            PropertyChanges{
                target: itemSlotImage
                source: "Images/carrotseeds.png"
            }
            PropertyChanges {
                target: amount
               text:gameEngine.getCarrotSeeds

            }
        },
        State{
         name: "s_Pumpkin"
         PropertyChanges {
             target: itemSlotImage
             source: "Images/pumpkin.png"
         }
         PropertyChanges {
             target: amount
            text:gameEngine.getPumpkin

         }

        },
        State{

        name:"s_Carrot"
        PropertyChanges {
            target: itemSlotImage
            source: "Images/carrot.png"
        }
        PropertyChanges {
            target: amount
           text:gameEngine.getCarrot

        }
        },
        State{
            name: "s_Sleep"
            PropertyChanges{
                target: itemSlotImage
                source: "Images/sleep.png"
            }
        }

    ]
    MouseArea{
        anchors.fill:parent
        hoverEnabled: true
        onClicked:{
            gameEngine.itemBarClicked(slotIndex);
        }
    }
}
