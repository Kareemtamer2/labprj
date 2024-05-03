#ifndef MARKETMAIN_H
#define MARKETMAIN_H

#include <QDialog>

namespace Ui {
class marketmain;
}

class marketmain : public QDialog
{
    Q_OBJECT

public:
    explicit marketmain(QWidget *parent = nullptr);
    ~marketmain();

private:
    Ui::marketmain *ui;
};

#endif // MARKETMAIN_H
