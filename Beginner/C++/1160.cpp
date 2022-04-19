#include<iostream>

using namespace std;

int main(){
    int T, PA, PB, anos;
    double G1, G2;
    cin >> T;
    while(T > 0){
        anos = 0;
        cin >> PA >> PB;
        cin >> G1 >> G2;
        while(PA <= PB){
            PA *= (1+(G1/100));
            PB *= (1+(G2/100));
            anos++;
            if(anos > 100){
                cout << "Mais de 1 seculo." << endl;
                break;

            }
        }
        if(anos <= 100)
            cout << anos << " anos." << endl;
        T--;
    }

    return 0;
}