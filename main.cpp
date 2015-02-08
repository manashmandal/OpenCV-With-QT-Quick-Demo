#include "dialog.h"
#include <QApplication>
#include "opencv2/highgui/highgui.hpp"
#include <QDebug>
#include <iostream>


using namespace cv;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Dialog w;
    w.show();
    w.setWindowTitle("Qt OpenCV Quick Demo");
    return a.exec();

}
