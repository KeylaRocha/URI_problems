
#include <iostream>

using namespace std;

int main(){
  int t, r1, r2;   //Variáveis do problema
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> r1 >> r2;
    //A soma do raio dos fios será o raio minimo do conduite.
    cout << (r1+r2) << endl; 
  }

  return 0;
}