#include<iostream>

using namespace std;

int main(){
    int X, Z, sum = 0, i;
    cin >> X;
    do {
        cin >> Z;
    }while(X >= Z);
    for(i = 0; sum <= Z; X++, i++)
        sum += X;
    cout << i;

    return 0;
}