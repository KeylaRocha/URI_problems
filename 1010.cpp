#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int Cod1,Cod2,Num1,Num2;
	double Val1,Val2,ValTotal;
	cin>>Cod1>>Num1>>Val1>>Cod2>>Num2>>Val2;
	ValTotal=(Num1*Val1)+(Num2*Val2);
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<ValTotal<<endl;
	return 0;
}

