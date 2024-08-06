import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 240
    height: 120
    title: qsTr("City Model")
    ListView {
        width: 180
        height: 120
        anchors.centerIn: parent
        model: cityModel
        delegate: Text {
            id: name
            text: qsTr(model.city)
        }
    }
}
