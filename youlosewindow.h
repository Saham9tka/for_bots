#ifndef YOULOSEWINDOW_H
#define YOULOSEWINDOW_H

#include <QWidget>

namespace Ui {
class YouLoseWindow;
}

class YouLoseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit YouLoseWindow(QWidget *parent = nullptr);
    ~YouLoseWindow();

private:
    Ui::YouLoseWindow *ui;
};

#endif // YOULOSEWINDOW_H
