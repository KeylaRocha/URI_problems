#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    string Nome;
	double Salario,Vendas,TOTAL;
	getline(cin,Nome);
	cin>>Salario>>Vendas;
	TOTAL=(Vendas*0.15)+Salario;
	cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<TOTAL<<endl;

	return 0;
}

