#ifndef NEWACCOUNT_H
#define NEWACCOUNT_H

#include <QDialog>

namespace Ui {
class newaccount;
}

class newaccount : public QDialog
{
    Q_OBJECT

public:
    explicit newaccount(QWidget *parent = nullptr);
    ~newaccount();

private:
    Ui::newaccount *ui;
};

#endif // NEWACCOUNT_H
