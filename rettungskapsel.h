#ifndef RETTUNGSKAPSEL_H
#define RETTUNGSKAPSEL_H
#include <iostream>
using namespace std;

class Rettungskapsel
{
private:
    int SerienNr;
    int Energie;
    int crew;
    int maxcrew = 4;
public:
    void setSerienNr(int SerienNr);
    int getSerienNr();
    void setEnergie(int Energie);
    int getEnergie();
    int setCrew(int member); //Erhöht bei Aufruf die Variable crew um den übergebenen Wert
                    //und gibt die Anzahl der Crewmitglieder zurück, die nicht
                    //in die Rettungskapsel passen
    int getCrew();
};


#endif // RETTUNGSKAPSEL_H
