import QtQuick
import QtQuick.Window

Window {
    visible: true
    width: 350
    height: 300
    title: qsTr("Welcome to QML !")
    color: "lightBlue"
    Rectangle {
        id: root
        width: 120; height: 240
        anchors.centerIn: parent
        color: "#4A4A4A"
        Image {
            id: imgQtlogo
            source: "qrc:/qt.png"
            width: Math.min(parent.width, parent.height) * 0.7
            height: width
            anchors.centerIn: parent
        }
        Text {
            id: txtQtLogo
            text: qsTr("The Qt Logo")
            color: "white"
            width: root.width
            horizontalAlignment: Text.AlignHCenter
            y: imgQtlogo.y + imgQtlogo.height + 20
        }
    }
}
