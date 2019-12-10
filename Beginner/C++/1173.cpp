
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
  int m;
  cin >> m;
  int n[10];
  n[0] = m;
  for(int i=1; i<10; i++)
    n[i] = n[i-1]*2;
  for(int i=0; i<10; i++)
    cout << "N[" << i << "] = " << n[i] << endl;

  return 0;
}