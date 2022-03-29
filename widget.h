// TP3/EX3/widget.h
// Exercice 3 : convertisseur mètres/pieds
// BODIN Maxime C2
// 22/03/29

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "converter.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    Converter myConverter;

private slots:
    void on_sValue_valueChanged(int value);
    void on_rMF_toggled(bool checked);
    void on_rFM_toggled(bool checked);
    void on_leValue_textEdited(const QString &arg1);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
