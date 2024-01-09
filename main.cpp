#include <iostream>

using namespace std;

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

int main()
{
    Raumschiff r;
    r.setName("Enterprise");
    r.setEnergie(77777);
    cout << r.getName() << endl;
    cout << r.getEnergie() << endl;

    return 0;
}
