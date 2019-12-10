#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int n; //Numero de casos
  double c; // Quantidade de comida
  cin >> n;

  while(n > 0){
    cin >> c;
    //imprime o proximo inteiro maior que c
    cout << ceil(log2(c)) << " dias" << endl;
    n--;
  }

  return 0;
}