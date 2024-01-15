#include "rettungskapsel.h"

void Rettungskapsel::setSerienNr(int SerienNr)
{
    this->SerienNr = SerienNr;
}

int Rettungskapsel::getSerienNr()
{
    return SerienNr;
}

void Rettungskapsel::setEnergie(int Energie)
{
    this->Energie = Energie;
}

int Rettungskapsel::getEnergie()
{
    return Energie;
}

int Rettungskapsel::setCrew(int member)
{
   crew = member;
    return 0;
}

int Rettungskapsel::getCrew()
{
    return crew;
}

