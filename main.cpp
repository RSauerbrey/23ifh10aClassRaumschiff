#include <iostream>
#include "raumschiff.h"
#include "rettungskapsel.h"

using namespace std;

int main()
{
    Raumschiff r;
    Rettungskapsel save;
    r.setName("Enterprise");
    r.setEnergie(77777);
    r.setRettungskapsel(&save);
    cout << r.getName() << endl;
    cout << r.getEnergie() << endl;

    save.setSerienNr(123345);
    cout << save.getSerienNr() << endl;

    r.test();
    cout << save.getCrew() << endl;

    return 0;
}
