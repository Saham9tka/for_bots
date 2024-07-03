#ifndef HAPPYACCIDENTWINDOW_H
#define HAPPYACCIDENTWINDOW_H

#include <QWidget>

namespace Ui {
class HappyAccidentWindow;
}

class HappyAccidentWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HappyAccidentWindow(QWidget *parent = nullptr);
    ~HappyAccidentWindow();

    void generateRandomAccident();

private:
    Ui::HappyAccidentWindow *ui;
};

#endif // HAPPYACCIDENTWINDOW_H
