#ifndef SPRITEWINDOW_H
#define SPRITEWINDOW_H

#include <QMainWindow>

namespace Ui {
class SpriteWindow;
}

class SpriteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpriteWindow(QWidget *parent = nullptr);
    ~SpriteWindow();

private:
    Ui::SpriteWindow *ui;
};

#endif // SPRITEWINDOW_H
