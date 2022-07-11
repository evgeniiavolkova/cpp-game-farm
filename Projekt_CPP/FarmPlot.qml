import QtQuick 2.0

Rectangle {
    property string previousState: ""
    property int plotIndex: 0
    id: farmPlot
    color: "black"
    opacity: 50
    width: 37
    height: 37
    Image {
            id: plotImage
            source: ""
            width: parent.width
            height: parent.height
            anchors.centerIn: parent
            }




    //border.color: "black"
    /*Text {
        id: zkouskaFunkcichIndexu     
        text:plotIndex
       anchors.centerIn: parent
    }*/
    states: [
    State{
        name: "s_Grass"
        PropertyChanges {
            target: plotImage
            source: "Images/grass.png"
             }
        },
    State{
        name: "s_FarmField"
        PropertyChanges {
            target: plotImage
            source: "Images/fieldongrass.png"
             }
        },
        State{
            name: "s_Home"
            PropertyChanges {
                target: plotImage
                source: "Images/house.png"
                 }
            },
        State{
            name: "s_Pumpkin"
            PropertyChanges {
                target: plotImage
                source: "Images/pumpkinfield.png"
                 }
            },
        State{
            name: "s_Carrot"
            PropertyChanges {
                target: plotImage
                source: "Images/carrotfield.png"
                 }
            },
        State{
            name: "s_PumpkinStageOne"
            PropertyChanges {
                target: plotImage
                source: "Images/fieldgrowone.png"
                 }
            },
        State{
            name: "s_PumpkinStageTwo"
            PropertyChanges {
                target: plotImage
                source: "Images/fieldgrowtwo.png"
                 }
            },
        State{
            name: "s_CarrotStageOne"
            PropertyChanges {
                target: plotImage
                source: "Images/fieldgrowone.png"
                 }
            },
        State{
            name: "s_CarrotStageTwo"
            PropertyChanges {
                target: plotImage
                source: "Images/fieldgrowtwo.png"
                 }
            },
        State{
            name: "s_MarketSell"
            PropertyChanges {
                target: plotImage
                source: "Images/market.png"
                 }
            },
        State{
            name: "s_MarketBuy"
            PropertyChanges {
                target: plotImage
               source: "sell.png"
                 }
            }
        /*State{
        name: "s_Player"
        PropertyChanges {
            target: plotImage
            source: "images/player2.png"
             }

        }*/
    ]

}
