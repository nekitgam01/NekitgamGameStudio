#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QApplication>
#include "nclasses.h"
#include "spritewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QVector <NSprite> sprites;
    SpriteWindow spritewindow;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

    void on_action_changed();

    void on_action_2_changed();

    void on_action_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
