#include <iostream>

using namespace std;

int main()
{
    int senha;
    int senFix = 2002;
    while(true)
    {
        cin >> senha;
        if(senha != senFix)
            cout << "Senha Invalida" << endl;
        if(senha == senFix)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
    }

    return 0;
}

