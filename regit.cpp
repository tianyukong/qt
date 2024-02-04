#include "regit.h"
#include "ui_regit.h"
#include "QSql"

regit::regit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::regit)
{
    ui->setupUi(this);
}

regit::~regit()
{
    delete ui;
}

void regit::on_pushButton_2_clicked()
{
    this->close();
}


void regit::on_pushButton_clicked()
{

}

