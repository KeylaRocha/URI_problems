#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double Codigo, Quantidade, Total;
    cin >> Codigo >> Quantidade;
    if (Codigo == 1)
    {
        Codigo = 4.00;
    }
    else if(Codigo == 2)
    {
        Codigo = 4.50;
    }
    else if(Codigo == 3)
    {
        Codigo = 5.00;
    }
    else if(Codigo == 4)
    {
        Codigo = 2.00;
    }
    else if(Codigo == 5)
    {
        Codigo = 1.50;
    }
    Total = Codigo * Quantidade;

    cout << fixed << setprecision(2) << "Total: R$ " << Total << endl;

    return 0;
}

