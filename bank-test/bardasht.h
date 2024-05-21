#ifndef BARDASHT_H
#define BARDASHT_H

#include <QDialog>

namespace Ui {
class bardasht;
}

class bardasht : public QDialog
{
    Q_OBJECT

public:
    explicit bardasht(QWidget *parent = nullptr);
    ~bardasht();

private:
    Ui::bardasht *ui;
};

#endif // BARDASHT_H
