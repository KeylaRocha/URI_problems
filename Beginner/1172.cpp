
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
  int v[10];

  for(int i=0; i<10; i++){
    int x; //variavel para auxiliar no tratamento da entrada
    cin >> x;
    //Tratamento
    if(x<=0)
      v[i] = 1;
    else
      v[i] = x;
  }
  for(int i=0; i<10; i++)
    cout << "X[" << i << "] = " << v[i] << endl;


  return 0;
}