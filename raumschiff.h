#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H


class Raumschiff
{
private:
    string Name;
    int Energie;
public:
    void setName(string Name);
    string getName();
    void setEnergie(int Energie);
    int getEnergie();
};


#endif // RAUMSCHIFF_H
