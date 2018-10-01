#include <iostream>

using namespace std;

int main()
{
    int tComb;
    int alcool = 0, gasolina = 0, diesel = 0;
    int dummy;
    while(true)
    {
        cin >> tComb;
        if(tComb == 1)
            alcool++;
        if(tComb == 2)
            gasolina++;
        if(tComb == 3)
            diesel++;
        if(tComb == 4)
            break;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}

