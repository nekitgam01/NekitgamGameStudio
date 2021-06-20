#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //sprites.push_back(*new NSprite);
    //sprites.value(0).images.push_back(*new QPixmap);
    //sprites.value(0).images.value(0).load("test.png");

    //QMessageBox::warning(this,"test",QString::number(sprites.count()));


    //Настраиваем панель упаравления
    QRect screen;
    screen = QApplication::desktop()->screenGeometry();
    this->setGeometry(0,0,screen.width(),64);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_changed()
{

}


void MainWindow::on_action_2_changed()
{

}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_action_triggered()
{
    spritewindow.show();
}

