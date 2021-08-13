#include "janelalogin.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

/**
    Main file
  * Arquivo de execção inicial
*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "src_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    JanelaLogin w;  /* Instanciação e inicialização da janela de  login */
    w.show();
    return a.exec();
}
