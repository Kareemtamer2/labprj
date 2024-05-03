#ifndef REGISTRING_H
#define REGISTRING_H

#include <QDialog>

namespace Ui {
class registring;
}

class registring : public QDialog
{
    Q_OBJECT

public:
    explicit registring(QWidget *parent = nullptr);
    ~registring();

private:
    Ui::registring *ui;
};

#endif // REGISTRING_H
