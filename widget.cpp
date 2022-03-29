// TP3/EX3/widget.cpp
// Exercice 3 : convertisseur mètres/pieds
// BODIN Maxime C2
// 22/03/29

#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{delete ui;}


void Widget::on_sValue_valueChanged(int value)
{
    ui->leValue->setText(QString::number(value));

    if(!ui->rFM->isChecked() && !ui->rMF->isChecked())
    {
        ui->lResult->setText(QString::number(0));
        ui->lUnit->setText("Choisissez une unité");
    }
    else{
        myConverter.setItsNumber(value);
        ui->lResult->setText(QString::number(myConverter.getResult()));
    }
}


void Widget::on_leValue_textEdited(const QString &arg1)
{
    if(!ui->rFM->isChecked() && !ui->rMF->isChecked())
    {
        ui->lResult->setText(QString::number(0));
        ui->lUnit->setText("Choisissez une unité");
    }
    else{
        myConverter.setItsNumber(arg1.toDouble());
        ui->lResult->setText(QString::number(myConverter.getResult()));
    }
}


void Widget::on_rMF_toggled(bool checked)
{
    if(checked)
    {
        myConverter.setItsRate(3.2808);
        ui->lUnit->setText("Pieds");
    }
}


void Widget::on_rFM_toggled(bool checked)
{
    if(checked)
    {
        myConverter.setItsRate(1/3.2808);
        ui->lUnit->setText("Mètres");
    }
}




