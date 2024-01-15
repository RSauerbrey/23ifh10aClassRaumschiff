#include "raumschiff.h"

void Raumschiff::setName(string Name)
{
    this->Name = Name;
}

string Raumschiff::getName()
{
    return Name;
}

void Raumschiff::setEnergie(int Energie)
{
    this->Energie = Energie;
}

int Raumschiff::getEnergie()
{
    return Energie;
}

void Raumschiff::setRettungskapsel(Rettungskapsel *k)
{
    kapsel = k;
}

Rettungskapsel* Raumschiff::getRettungskapsel()
{
    return kapsel;
}

void Raumschiff::test()
{
    kapsel->setCrew(3);
}
