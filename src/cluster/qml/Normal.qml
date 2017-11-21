import QtQuick 2.0

Item {

    property real originPicWidth : bg.sourceSize.width
    property real originPicHeigth: bg.sourceSize.height

    property real xRatio: width / originPicWidth
    property real yRatio: height/ originPicHeigth

    Image {
        id: bg
        anchors.fill: parent
        source: "qrc:/img/cluster_normal.png"
    }
}
