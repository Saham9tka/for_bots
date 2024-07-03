#ifndef HIDEPLAYERSTATSWINDOW_H
#define HIDEPLAYERSTATSWINDOW_H

#include <QWidget>

namespace Ui {
class HidePlayerStatsWindow;
}

class HidePlayerStatsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HidePlayerStatsWindow(QWidget *parent = nullptr);
    ~HidePlayerStatsWindow();

private:
    Ui::HidePlayerStatsWindow *ui;
};

#endif // HIDEPLAYERSTATSWINDOW_H
