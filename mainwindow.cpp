#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "regit.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    QString account= ui->account->text();
    QString pwd=ui->pwd->text();
    if(account.isEmpty()||pwd.isEmpty())
    {
        QMessageBox::information(this, "登录失败", "输入不能为空！");
    }
    else
    {
       QMessageBox::information(this, "登录成功", "账号是: "+account+"\n密码是: "+pwd);
    }




}


void MainWindow::on_exit_clicked()
{
    QApplication::quit();
}


void MainWindow::on_registeracc_clicked()
{
    regit *r=new regit();
    r->show();
}

