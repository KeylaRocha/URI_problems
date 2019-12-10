#include<iostream>

using namespace std;

int main()
{
  int n, t, v, kilometros = 0;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> t >> v;
    kilometros += t*v;
  }

  cout << kilometros << endl;
  
  return 0;
}