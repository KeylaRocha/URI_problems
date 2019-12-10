#include <iostream>

using namespace std;

int main()
{
    double money;
    cin >> money;
    int n100 = 0;
    int n50 = 0;
    int n20 = 0;
    int n10 = 0;
    int n5 = 0;
    int n2 = 0;
    int m100 = 0;
    int m50 = 0;
    int m25 = 0;
    int m10 = 0;
    int m5 = 0;
    int m1 = 0;
    if(money > 0)
    {
        while(money >= 100)
        {
            n100++;
            money -= 100;
        }
        while(money >= 50)
        {
            n50++;
            money -= 50;
        }
        while(money >= 20)
        {
            n20++;
            money -= 20;
        }
        while(money >= 10)
        {
            n10++;
            money -= 10;
        }
        while(money >= 5)
        {
            n5++;
            money -= 5;
        }
        while(money >= 2)
        {
            n2++;
            money -= 2;
        }
        while(money >= 1)
        {
            m100++;
            money -= 1;
        }
        money *= 100;
        while(money >= 50)
        {
            m50++;
            money -= 50;
        }
        while(money >= 25)
        {
            m25++;
            money -= 25;
        }
        while(money >= 10)
        {
            m10++;
            money -= 10;
        }
        while(money >= 5)
        {
            m5++;
            money -= 5;
        }
        while(money >= 1)
        {
            m1++;
            money -=1;
        }
    }
    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m100 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
