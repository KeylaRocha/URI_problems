#include<iostream>
using namespace std;

int main()
{
    int Idade, Ano, Mes, Dia;
    cin>>Idade;
    Ano=Idade/365;
    Mes=(Idade%365)/30;
    Dia=(Idade%365)%30;
    cout<<Ano<<" ano(s)"<<endl<<Mes<<" mes(es)"<<endl<<Dia<<" dia(s)"<<endl;

    return 0;
}
