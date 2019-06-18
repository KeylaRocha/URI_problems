
#include <iostream>

using namespace std;

int main(){
  int n, menor, posicao = 0;
  cin >> n;
  int vetor[n];
  for(int i = 0; i < n; i++)
    cin >> vetor[i];

  menor = vetor[0];  //começo do vetor
  for(int i = 1; i < n; i++) //começa do segundo elemento
    if(menor > vetor[i]){ //se algum elemento do vetor for maior que o menor atual
      menor = vetor[i];
      posicao = i;
    }

  cout << "Menor valor: " << menor << endl;
  cout << "Posicao: " << posicao << endl;
  
  return 0;
}