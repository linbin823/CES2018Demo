import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 1920
    height: 720
    title: qsTr("Cluster for CES2018")
    id: root

    Loader{
        id: mainContent
        anchors.fill: parent
        source: "Normal.qml"
    }
}
