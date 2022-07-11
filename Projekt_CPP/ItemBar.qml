import QtQuick 2.0

Rectangle {
    id: itemBar
    width: 360
    height: 60
    Grid{
        anchors.centerIn: parent
        id: itemGrid
        rows: 1
        Repeater{
            model: 6
            ItemSlot{
                slotIndex: index
                state: gameEngine.getBarState(slotIndex);


                      /*if(slotIndex==0){
                           "s_Shovel"
                       }
                       if(slotIndex==1){
                           "s_PumpkinSeeds"
                       }
                       if(slotIndex==2){
                           "s_CarrotSeeds"
                       }
                       if (slotIndex==5){
                           "s_Sleep"
                       }*/
                }
            }
    }/*
    Shovel{

    }
*/

}
