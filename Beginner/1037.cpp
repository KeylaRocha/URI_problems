#include <iostream>

using namespace std;

int main()
{
    double Valor;
    cin >> Valor;
    if(Valor >= 0 && Valor <= 25)
    {
        cout << "Intervalo [0,25]" << endl;
    }
    else if(Valor > 25 && Valor <= 50)
    {
        cout << "Intervalo (25,50]" << endl;
    }
    else if(Valor > 50 && Valor <= 75)
    {
        cout << "Intervalo (50,75]" << endl;
    }
    else if(Valor > 75 && Valor <= 100)
    {
        cout << "Intervalo (75,100]" << endl;
    }
    else
    {
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}
