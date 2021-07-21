#include <pthread.h>
#include <QObject>
#include "widget.h"
#include "ui_widget.h"
#include <thread>
#include <QProcess>
using namespace std;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    wait = new DSpinner(this);
    wait->setVisible(false);
    ui->Widget::verticalLayout->addWidget(wait);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    wait->setVisible(true);
    wait->start();
    QProcess *install=new QProcess;
    install->start("pkexec",{"deepin-wine-venturi-setter", "deepin"});
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    wait->stop();
    wait->setVisible(false);

}

void Widget::on_pushButton_2_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    wait->setVisible(true);
    wait->start();
    QProcess *install=new QProcess;
    install->start("pkexec",{"deepin-wine-venturi-setter", "defult"});
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    wait->stop();
    wait->setVisible(false);
}

void Widget::on_pushButton_3_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    wait->setVisible(true);
    wait->start();
    QProcess *install=new QProcess;
    install->start("pkexec",{"deepin-wine-venturi-setter", "recovery"});
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    wait->stop();
    wait->setVisible(false);
}
