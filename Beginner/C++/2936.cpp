#include<iostream>

using namespace std;

int main()
{
  int pesos[5] = {300, 1500, 600, 1000, 150};  //peso em gramas das porções de cada convidado
  int porcao[5];  //Quantidade de porçoẽs que cada convidado comeu 
  int mandioca = 0;  //Quantidade final de mandioca

  cin >> porcao[0] >> porcao[1] >> porcao[2] >> porcao[3] >> porcao[4];

  for(int i = 0; i < 5; i++)
    mandioca += porcao[i]*pesos[i];

  cout << mandioca+225 << endl;  //Os 225 a mais é por causa da porção da Dona Chica

  return 0;
}