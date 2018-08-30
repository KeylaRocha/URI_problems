#include <iostream>
#include <iomanip>

using namespace std;

int posi = 0;

int positivos(double a, double b, double c, double d, double e, double f)
{
    if(a >= 0)
        posi ++;
    if(b >= 0)
        posi ++;
    if(c >= 0)
        posi ++;
    if(d >= 0)
        posi ++;
    if(e >= 0)
        posi ++;
    if(f >= 0)
        posi ++;

    return posi;
}

double media(double a, double b, double c, double d, double e, double f)
{
    double med;
    double sum = 0;
    if(a >= 0)
        sum += a;
    if(b >= 0)
        sum += b;
    if(c >= 0)
        sum += c;
    if(d >= 0)
        sum += d;
    if(e >= 0)
        sum += e;
    if(f >= 0)
        sum += f;
    med = sum/(1.0 * posi);

    return med;
}

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << positivos(a, b, c, d, e, f) << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media(a, b, c, d, e, f) << endl;

    return 0;
}

