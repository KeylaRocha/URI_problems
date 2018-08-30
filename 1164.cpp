#include <iostream>

using namespace std;

int main()
{
    int nCasos, var;
    int sum;
    cin >> nCasos;
    while(nCasos > 0)
    {
        sum = 0;
        cin >> var;
        for(int i = 1; i <= var/2; i++)
            if(var%i == 0)
                sum += i;
        cout << var;
        if(sum == var)
            cout << " eh perfeito" << endl;

        else
            cout  << " nao eh perfeito" << endl;
        nCasos--;
    }

    return 0;
}
