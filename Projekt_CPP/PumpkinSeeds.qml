import QtQuick 2.0

Rectangle {
    id: pumpkinSeeds
    width: 60
    height: 60
    color: "lightgray"
    border.color: "gray"
    anchors.bottom: FarmPlot
    anchors.left: parent
    Image {
        id: pumpkinSeedsImage
        width: parent.width
        height: parent.height
        anchors.centerIn: parent
        source: "Images/.png"
    }


}
