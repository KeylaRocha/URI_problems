#include<iostream>

using namespace std;

int main(){
  int *n = new int[20];
  int *m = new int[20];
  for(int i=0; i<20; i++)
    cin >> n[i];
  for(int i=0,j=19; i<20&&j>=0; i++, j--)
      m[j] = n[i];
  for(int i=0; i<20; i++)
    cout << "N[" << i << "]" << " = " << m[i] << endl;

  return 0;
}