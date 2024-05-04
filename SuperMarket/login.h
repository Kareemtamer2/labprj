#ifndef LOGIN_H
#define LOGIN_H

#include "QtMultimedia/qaudiooutput.h"
#include "QtMultimedia/qmediaplayer.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
    QAudioOutput* storetheme=new QAudioOutput();
    QMediaPlayer *storesound=new QMediaPlayer();
    std::map<std::string,std::string> login_record;

private slots:
    void on_LoginPush_clicked();

    void on_RegisterButton_clicked();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
