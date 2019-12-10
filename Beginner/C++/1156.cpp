#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float sum = 1;
    float den = 2;
    float num = 3;
    float ocorrencias = 0;
    while(num <= 39)
        {
            sum += (num/den);
            ocorrencias++;
            den*=2;
            num+=2;
        }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}
