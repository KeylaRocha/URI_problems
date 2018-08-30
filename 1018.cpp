#include <iostream>

using namespace std;

int main()
{
    int money;
    cin >> money;
    cout << money << endl;
    int ce = 0;
    int ci = 0;
    int vi = 0;
    int de = 0;
    int cc = 0;
    int ds = 0;
    int um = 0;
    if(money > 0)
    while(money > 100)
    {
        money -= 100;
        ce++;
    }
    while(money > 50)
    {
        money -= 50;
        ci++;
    }
    while(money >= 20)
    {
        money -= 20;
        vi++;
    }
    while(money >= 10)
    {
        money -= 10;
        de++;
    }
    while(money >= 5)
    {
        money -= 5;
        cc++;
    }
    while(money >= 2)
    {
        money -= 2;
        ds++;
    }
    while(money >= 1)
    {
        money -= 1;
        um++;
    }
    cout << ce << " nota(s) de R$ 100,00" << endl;
    cout << ci << " nota(s) de R$ 50,00" << endl;
    cout << vi << " nota(s) de R$ 20,00" << endl;
    cout << de << " nota(s) de R$ 10,00" << endl;
    cout << cc << " nota(s) de R$ 5,00" << endl;
    cout << ds << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;

    return 0;
}

