#include "dialog.h"
#include "ui_dialog.h"
#include<string>
#include<QLineEdit>
#include<QDebug>
#include<QApplication>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_exitButton_clicked()
{
    QApplication::quit();
}

void Dialog::on_ConfirmButton_clicked()
{
    QString email=ui->lineEdit_1->text();
    QString pwd=ui->lineEdit_2->text();
    QString confirmpwd=ui->lineEdit_3->text();
    qDebug()<<"Email:"<<email;
    qDebug()<<"password:"<<pwd;
    qDebug()<<"Confirmpassword:"<<confirmpwd;
    if(!email.isEmpty()&& !pwd.isEmpty()&&!confirmpwd.isEmpty())
    {

    }
    else{
        qDebug()<<"one field is empty";
    }
}
