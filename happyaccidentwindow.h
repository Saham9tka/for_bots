#ifndef HAPPYACCIDENTWINDOW_H
#define HAPPYACCIDENTWINDOW_H

#include <QWidget>
namespace Ui {
class HappyAccidentWindow;
}

enum class Chance {
    Fabric_burn, BirthDay, Skip, Inheritance, Crisis, No_Event
};

class HappyAccidentWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HappyAccidentWindow(QWidget *parent = nullptr);
    ~HappyAccidentWindow();

    void generateRandomAccident(Chance event);

private:
    Ui::HappyAccidentWindow *ui;
};

#endif // HAPPYACCIDENTWINDOW_H
