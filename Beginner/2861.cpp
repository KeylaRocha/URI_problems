
#include <iostream>

using namespace std;

int main(){
  int c;    //Variavel do problema
  string pergunta;
  cin >> c;
  for(int i = 0; i < c; i++){     //O problema só exige entrada, nada será feito com ela.
    getline(cin, pergunta);
    cout << "gzuz" << endl;       //Só imprimir "gzuz" pra cada entrada.
  }

  return 0;
}