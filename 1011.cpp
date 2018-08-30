#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double R,PI,VOL;
    cin>>R;
    PI=3.14159;
    VOL=(4.0/3)*PI*(pow(R,3));
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<VOL<<endl;
    return 0;
}


