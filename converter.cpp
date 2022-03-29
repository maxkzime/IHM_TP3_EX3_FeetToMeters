// TP3/EX3/converter.cpp
// Exercice 3 : convertisseur mètres/pieds
// BODIN Maxime C2
// 22/03/29

#include "converter.h"

void Converter::setItsRate(double newItsRate)
{itsRate = newItsRate;}

void Converter::setItsNumber(double newItsNumber)
{itsNumber = newItsNumber;}

double Converter::getResult()
{return itsNumber * itsRate;}

Converter::Converter()
{}
