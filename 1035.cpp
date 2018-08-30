#include <iostream>

using namespace std;

int main ()
{
    int A, B, C, D, SumCD, SumAB;
    cin >> A >> B >> C >> D;
    SumCD = C + D;
    SumAB = A + B;
    if (B > C && D > A)
    {
        if (SumCD > SumAB)
        {
            if (C > 0 && D > 0)
            {
                if (A % 2 == 0)
                {
                    cout << "Valores aceitos" << endl;
                }
                else
                    cout << "Valores nao aceitos" << endl;
            }
            else
                cout << "Valores nao aceitos" << endl;
        }
        else
            cout << "Valores nao aceitos" << endl;
    }
    else
        cout << "Valores nao aceitos" << endl;

    return 0;
}

