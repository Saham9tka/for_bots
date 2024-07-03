#ifndef RULESWINDOW_H
#define RULESWINDOW_H

#include <QWidget>

namespace Ui {
class RulesWindow;
}

class RulesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RulesWindow(QWidget *parent = nullptr);
    ~RulesWindow();

private:
    Ui::RulesWindow *ui;
};

#endif // RULESWINDOW_H
