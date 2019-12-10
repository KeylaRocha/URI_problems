#include <iostream>

using namespace std;

int main()
{
  int n, menor;
  cin >> n;
  int t[n];

  for(int i = 0; i < n; i++)
    cin >> t[i];
  menor = 0;

  for(int i = 1; i < n; i++)
    if(t[i] < t[menor])
      menor = i;    

  cout << menor+1 << endl;

  return 0;
}