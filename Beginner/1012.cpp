#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A,B,C,PI;
    cin>>A>>B>>C;
    PI=3.14159;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<(A*C)/2<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<PI*(C*C)<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<(A+B)*C/2<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<B*B<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<A*B<<endl;
    return 0;
}
