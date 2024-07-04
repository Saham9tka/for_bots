#ifndef LOADGAMEWINDOW_H
#define LOADGAMEWINDOW_H
#include <QWidget>

namespace Ui {
class LoadGameWindow;
}

class LoadGameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoadGameWindow(QWidget *parent = nullptr);
    ~LoadGameWindow();

private slots:
    void on_continueGameButton_clicked();

    void unblockContinueGameButton(bool loginSettled, bool passwordSettled);

    void on_loginInputLine_textChanged(const QString &arg1);

    void on_passwordInputLine_textChanged(const QString &arg1);

private:
    Ui::LoadGameWindow *ui;
};

#endif // LOADGAMEWINDOW_H
