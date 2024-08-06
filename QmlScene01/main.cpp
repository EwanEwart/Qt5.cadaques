#include <QGuiApplication>
#include <QQuickView>
#include <QUrl>

#include <QtQml>
#include <QtQuick>

int main ( int ac, char* av [] )
{
  QGuiApplication app ( ac, av );

  QQuickView view;

  view . setColor ( QColor ( Qt::GlobalColor::lightGray ) );
  view . setSource ( QUrl ( "qrc:/main.qml" ) );

  app . connect ( ( &view ) -> engine (), SIGNAL (quit ()), &app, SLOT (quit ()) );

//	app . connect ( ( &view ) -> engine (), SIGNAL (pressed ()), &app, SLOT (quit ()) );
  view . show ();

  int rc = app . exec ();

  return rc;
} // main
