#include <iostream>

using namespace std;



int main()
{
    Raumschiff r;
    r.setName("Enterprise");
    r.setEnergie(77777);
    cout << r.getName() << endl;
    cout << r.getEnergie() << endl;

    return 0;
}
