#include <iostream>

using namespace std;

int cont;

void pares(int a, int b, int c, int d, int e)
{
    cont = 0;
    if(a%2 == 0)
        cont++;
    if(b%2 == 0)
        cont++;
    if(c%2 == 0)
        cont++;
    if(d%2 == 0)
        cont++;
    if(e%2 == 0)
        cont++;
    cout << cont << " valor(es) par(es)" << endl;
}

void impares(int a, int b, int c, int d, int e)
{
    cont = 0;
    if((a-1)%2 == 0)
        cont++;
    if((b-1)%2 == 0)
        cont++;
    if((c-1)%2 == 0)
        cont++;
    if((d-1)%2 == 0)
        cont++;
    if((e-1)%2 == 0)
        cont++;
    cout << cont << " valor(es) impar(es)" << endl;
}

void positivos(int a, int b, int c, int d, int e)
{
    cont = 0;
    if(a > 0)
        cont++;
    if(b > 0)
        cont++;
    if(c > 0)
        cont++;
    if(d > 0)
        cont++;
    if(e > 0)
        cont++;
    cout << cont << " valor(es) positivo(s)" << endl;
}

void negativos(int a, int b, int c, int d, int e)
{
    cont = 0;
    if(a < 0)
        cont++;
    if(b < 0)
        cont++;
    if(c < 0)
        cont++;
    if(d < 0)
        cont++;
    if(e < 0)
        cont++;
    cout << cont << " valor(es) negativo(s)" << endl;

}

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    pares(a, b, c, d, e);
    impares(a, b, c, d, e);
    positivos(a, b, c, d, e);
    negativos(a, b, c, d, e);

    return 0;
}

