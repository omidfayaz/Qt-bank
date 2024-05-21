#ifndef VARIZ_H
#define VARIZ_H

#include <QDialog>

namespace Ui {
class variz;
}

class variz : public QDialog
{
    Q_OBJECT

public:
    explicit variz(QWidget *parent = nullptr);
    ~variz();

private:
    Ui::variz *ui;
};

#endif // VARIZ_H
