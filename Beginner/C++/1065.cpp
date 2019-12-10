#include <iostream>

using namespace std;

void pares(int a, int b, int c, int d, int e)
{
    int par = 0;
    if(a%2 == 0)
        par++;
    if(b%2 == 0)
        par++;
    if(c%2 == 0)
        par++;
    if(d%2 == 0)
        par++;
    if(e%2 == 0)
        par++;
    cout << par << " valores pares" << endl;
}

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    cin >> a >> b >> c >> d >> e;
    pares(a, b, c, d, e);

    return 0;
}
