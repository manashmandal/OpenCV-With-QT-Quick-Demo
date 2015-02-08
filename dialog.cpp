#include "dialog.h"
#include "ui_dialog.h"
#include <QString>
#include <QMessageBox>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

    QString fileName;


    fileName = QFileDialog::getOpenFileName(this, "Open Image", ".", "Image Files(*.png *.jpg *.jpeg)");


    if (!fileName.isEmpty()){
    image = cv::imread(fileName.toLatin1().data());
    cv::namedWindow("Original Image");
    cv::imshow("Original Image", image);
    }

}

void Dialog::on_pushButton_2_clicked()
{
    if (!image.empty()){
    cv::flip(image, image, 1);
    cv::namedWindow("Processed Image");
    cv::imshow("Output Image", image);
    } else {
        QMessageBox::warning(this, "No image found", "Please select an image first");
    }
}
