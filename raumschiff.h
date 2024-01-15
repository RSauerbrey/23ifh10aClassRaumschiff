#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include <iostream>
#include "rettungskapsel.h"
using namespace std;

class Rettungskapsel;
class Raumschiff
{
private:
    string Name;
    int Energie;
    Rettungskapsel *kapsel;
public:
    void setName(string Name);
    string getName();
    void setEnergie(int Energie);
    int getEnergie();
    void setRettungskapsel(Rettungskapsel *k);
    Rettungskapsel* getRettungskapsel();
    void test();
};


#endif // RAUMSCHIFF_H
