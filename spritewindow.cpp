#include "spritewindow.h"
#include "ui_spritewindow.h"

SpriteWindow::SpriteWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpriteWindow)
{
    ui->setupUi(this);
}

SpriteWindow::~SpriteWindow()
{
    delete ui;
}
