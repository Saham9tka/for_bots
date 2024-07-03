#ifndef ERRORWINDOW_H
#define ERRORWINDOW_H

#include <QWidget>

namespace Ui {
class errorWindow;
}

class errorWindow : public QWidget
{
    Q_OBJECT

public:
    explicit errorWindow(QWidget *parent = nullptr);
    ~errorWindow();

private:
    Ui::errorWindow *ui;
};

#endif // ERRORWINDOW_H
