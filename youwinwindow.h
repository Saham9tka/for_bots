#ifndef YOUWINWINDOW_H
#define YOUWINWINDOW_H

#include <QWidget>

namespace Ui {
class YouWinWindow;
}

class YouWinWindow : public QWidget
{
    Q_OBJECT

public:
    explicit YouWinWindow(QWidget *parent = nullptr);
    ~YouWinWindow();

private:
    Ui::YouWinWindow *ui;
};

#endif // YOUWINWINDOW_H
