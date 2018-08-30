#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int H,VM;
    cin>>H>>VM;
    double GASTO;
    GASTO=(H*VM)/12.0;
    cout<<fixed<<setprecision(3)<<GASTO<<endl;

    return 0;
}

