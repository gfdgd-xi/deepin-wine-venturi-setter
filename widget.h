#ifndef WIDGET_H
#define WIDGET_H
#include <DSpinner>
#include <dspinner.h>
#include <QWidget>
#include <QVBoxLayout>
#include <QThread>
DWIDGET_USE_NAMESPACE
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void settings(){system("pkexec ls /");};
    //explicit InstallThread(QObject *parent = 0);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    DSpinner * wait;

protected:
    //void run();
    //void isDone();
};

#endif // WIDGET_H
