#ifndef NEWGAMEWINDOW_H
#define NEWGAMEWINDOW_H

#include <QWidget>

namespace Ui {
class NewGameWindow;
}

class NewGameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NewGameWindow(QWidget *parent = nullptr);
    ~NewGameWindow();

private slots:
    void on_startGameButton_clicked();

    void on_startGameLogin_textChanged(const QString &arg1);

    void unblockStartGameButton(bool loginSettled, bool passwordSettled, bool playerCountSettled);

    void on_startGamePassword_textChanged(const QString &arg1);

    void on_onePlayerGameChoice_clicked();

    void on_twoPlayerGameChoice_clicked();

    void on_threePlayerGameChoice_clicked();

    void on_fourPlayerGameChoice_clicked();

private:
    Ui::NewGameWindow *ui;
};

#endif // NEWGAMEWINDOW_H
