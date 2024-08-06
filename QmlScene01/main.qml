import QtQuick 2.4

Item {
  id: root

  width:100; height: 100

  signal pressed

  Rectangle {
    id: button_1


    focus: true
    Keys.onSpacePressed: Qt.quit()

    x:25;y:x
    width: 50;height: width

    color: Qt .rgba ( 0.5, 0.5, 0.5, 0.80)
//    color: "#555555"
    border.width: 5;
    border.color: Qt.darker(color)
    radius: 5

    Text {
      id: label_1
      text: "Close"
      color: "white"
      anchors.centerIn: parent
    }

    MouseArea {
      anchors.fill: parent
      onClicked: {
        console.log ( "clicked ...");
        root.pressed ()
        Qt.quit ()
      }
    }
  }
}
