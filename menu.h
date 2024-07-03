#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_newGameButton_clicked();

    void on_existedGameButton_clicked();

    void on_rulesOfGameButton_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
