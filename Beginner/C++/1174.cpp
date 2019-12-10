
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double vetor[100]; //vetor de numero reais
  for(int i = 0; i < 100; i++)
    cin >> vetor[i]; //entrada de valores
  
  for(int i = 0; i < 100; i++)
    if(vetor[i] <= 10)  //checa se é maior ou igual a 10
      cout << fixed << setprecision(1) << "A[" << i << "] = " << vetor[i] << endl;

  return 0;
}
