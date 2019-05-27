
#include <iostream>

using namespace std;

int main(){
  int T, T2 = 0;
  int *N = new int[1000];

  cin >> T;

  for(int i = 0; i < 1000; i++){
    if(T2 == T) //reinicia o ciclo
      T2 = 0;
    N[i] = T2;
    T2++;
  }

  for(int i = 0; i < 1000; i++)
    cout << "N[" << i << "] = " << N[i] << endl;

  return 0;
}