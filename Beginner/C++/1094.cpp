#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int qtd;
    char tipo;
    int sum = 0, c = 0, r = 0, s = 0;
    for(; n > 0; n--)
    {
        cin >> qtd >> tipo;
        sum += qtd;
        if(tipo == 'C')
            c += qtd;
        else if(tipo == 'R')
            r += qtd;
        else if(tipo == 'S')
            s += qtd;
    }
    cout << fixed << setprecision(2) << "Total: " << sum << " cobaias" << endl;
    cout << fixed << setprecision(2) << "Total de coelhos: " << c << endl;
    cout << fixed << setprecision(2) << "Total de ratos: " << r << endl;
    cout << fixed << setprecision(2) << "Total de sapos: " << s << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << (c/(sum*1.0))*100 << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << (r/(sum*1.0))*100 << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << (s/(sum*1.0))*100 << " %" << endl;

    return 0;
}
