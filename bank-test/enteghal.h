#ifndef ENTEGHAL_H
#define ENTEGHAL_H

#include <QDialog>

namespace Ui {
class enteghal;
}

class enteghal : public QDialog
{
    Q_OBJECT

public:
    explicit enteghal(QWidget *parent = nullptr);
    ~enteghal();

private:
    Ui::enteghal *ui;
};

#endif // ENTEGHAL_H
