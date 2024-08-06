import QtQuick 2.11
import QtQuick.Window 2.11

// A widget w/o a parent is a Window
Window {
    visible: true
    width: 200
    height: 200
    color: "grey"
    title: qsTr("L'Italia")
    Rectangle {
        anchors.centerIn: parent
        width: 100
        height: 100
        color: "#ffffaa"
        Text {
            id: greeting
            anchors.centerIn: parent
            text: qsTr("Buon Giorno!")
        }
        MouseArea {
            anchors.fill: parent
            onClicked: Qt.quit()
        }
    }
}
