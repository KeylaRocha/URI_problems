
#include <iostream>

using namespace std;

int main(){
  int v, t;  //variaveis do problema
  cin >> v >> t;
  int volTotal = v, vol; //para calcular o volume final e pegar as diferenças de volumes
  for(int i = 0; i < t; i++){
    cin >> vol;
    volTotal += vol;
    if(volTotal > 100)
      volTotal = 100;
    else if(volTotal < 0)
      volTotal = 0;
  }
  cout << volTotal << endl;

  return 0;
}