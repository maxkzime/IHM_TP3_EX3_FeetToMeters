// TP3/EX3/converter.h
// Exercice 3 : convertisseur mètres/pieds
// BODIN Maxime C2
// 22/03/29

#ifndef CONVERTER_H
#define CONVERTER_H


class Converter
{
private:
    double itsRate;
    double itsNumber;

public:
    Converter();

    void setItsRate(double newItsRate);
    void setItsNumber(double newItsNumber);
    double getResult();

};

#endif // CONVERTER_H
