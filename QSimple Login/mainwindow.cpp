#include "mainwindow.h"
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QDebug>
#include<QMessageBox>
#include<QVBoxLayout>
#include<QFont>
#include<dialog.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //ImageIcon for username
    QLabel *lab=new QLabel(this);
    lab->setMinimumSize(70,50);
    lab->move(100,50);
    QPixmap pixx("C:/Users/ELCOT/Desktop/QSimpleLogin/icons/username.png");
    lab->setPixmap(pixx.scaled(20,20));
    //set image icon in center
    QLabel *mlabel=new QLabel(this);
    mlabel->move(180,25);
    mlabel->setAlignment(Qt::AlignCenter);
    QPixmap pix("C:/Users/ELCOT/Desktop/QSimpleLogin/icons/login.png");
    mlabel->setPixmap(pix.scaled(80,20));
    //QLabel for username
    QLabel *unlabel=new QLabel("username",this);
    unlabel->setMinimumSize(70,50);
    unlabel->move(130,50);
    QPalette l1;
    l1.setColor(QPalette::WindowText,Qt::red);
    unlabel->setPalette(l1);
    //QLineedit for username
    QLineEdit *unlineEdit=new QLineEdit(this);
    unlineEdit->setMinimumSize(200,50);
    unlineEdit->move(220,50);
    //set the lineedit border to red color
    unlineEdit->setStyleSheet("border:2px solid red");
    //ImageIcon for password
    QLabel *labb=new QLabel(this);
    labb->setMinimumSize(200,50);
    labb->move(100,110);
    QPixmap pixxx("C:/Users/ELCOT/Desktop/QSimpleLogin/icons/password.png");
    labb->setPixmap(pixxx.scaled(20,20));
    //QLabel for password
    QLabel *pwd=new QLabel("password",this);
    pwd->setMinimumSize(110,50);
    pwd->move(130,110);
    QPalette l2;
    l2.setColor(QPalette::WindowText,Qt::green);
    pwd->setPalette(l2);
    //QLineedit for password
    QLineEdit *pass=new QLineEdit(this);
    pass->setMinimumSize(200,50);
    pass->move(220,110);
    pass->setEchoMode(QLineEdit::Password);
    //set the lineedit border to green color
    pass->setStyleSheet("border:2px solid green");

    //QLabel
    QLabel *account=new QLabel("Dont have account",this);
    account->setMinimumSize(200,50);
    account->move(130,170);

    //QPushButton for SignUp
    QFont button("times",8,QFont::Bold);
     QPushButton *button1=new QPushButton("Signup",this);
     button1->setFont(button);
     button1->move(220,190);
     connect(button1,&QPushButton::clicked,[=](){
                 Dialog *dialog=new Dialog(this);
                 dialog->exec();
             });
     //QPushButton for Login
     QFont buttons("times",15,QFont::Bold);
      QPushButton *button2=new QPushButton("Login",this);
      button2->setFont(buttons);
      button2->move(220,250);
      connect(button2,&QPushButton::clicked,[=](){
             QString username=unlineEdit->text();
              QString password=pass->text();
              if(username=="subha" && password=="123")
              {
                  QMessageBox::information(this,"login","username and password is correct");
              }
              else{
                  QMessageBox::information(this,"login","username and password is not correct");

              }
              });
      //hint text
      unlineEdit->setPlaceholderText("username");
      pass->setPlaceholderText("password");

}

MainWindow::~MainWindow()
{
}

