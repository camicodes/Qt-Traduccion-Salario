#include "principal.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>
#include <QLocale>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Objeto para manejar las traducciones
    QTranslator traducion;
    // Solicitando al usuario que seleccione un idioma
    QStringList idiomas;
    idiomas << "Inglés" << "Francés" << "Italiano" << "Ruso" << "Español";
    QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                               "Idioma",
                               "Seleccione un idioma",
                               idiomas);
    // Dependiendo del idioma seleccionado, carga el archivo de rtaducción
    if (idiomaSeleccionado == "Italiano"){
        traducion.load(":/Salario_it_IT.qm");
    }else if (idiomaSeleccionado == "Inglés"){
        traducion.load(":/Salario_en.qm");
    }else if (idiomaSeleccionado == "Francés"){
        traducion.load(":/Salario_fr_FR.qm");
    }else if (idiomaSeleccionado == "Ruso"){
        traducion.load(":/Salario_ru_RU.qm");
    }
    // Si es diferente de español, se instala la traducción en TODA la aplicación
    if (idiomaSeleccionado != "Español"){
        a.installTranslator(&traducion);
    }

    // Muestra la ventana principal
    Principal w;
    w.show();
    return a.exec();
}
