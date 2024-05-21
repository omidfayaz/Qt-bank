#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_newaccount_clicked();

    void on_newaccount_2_clicked();

    void on_enteghalbuttton_clicked();

    void on_enteghalbutton_clicked();

    void on_bardashtbutton_clicked();

    void on_varizbutton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
