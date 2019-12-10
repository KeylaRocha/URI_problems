#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double raio,area,Pi;
    Pi=3.14159;
    cin>>raio;
    area=Pi*pow(raio,2);
    cout<<fixed<<setprecision(4)<<"A="<<area<<endl;
    return 0;
}

