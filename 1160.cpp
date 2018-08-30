#include<iostream>

using namespace std;

int main()
{
    int cTeste;
    cin >> cTeste;
    int popA,popB;
    double crsA, crsB;
    int anos = 0;
    while(cTeste > 0)
    {
        cin >> popA >> popB;
        cin >> crsA >> crsB;
        for(; popB > popA; anos++)
        {
            if(anos > 100)
                break;
            popA = popA*(1+(crsA/100));
            popB = popB*(1+(crsB/100));
        }
        cTeste--;
        if(anos > 100)
            cout << "Mais de 1 seculo." << endl;
        else
            cout << anos << " anos." << endl;
    }
    return 0;
}
