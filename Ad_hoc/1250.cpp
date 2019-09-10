#include <iostream>

using namespace std;

int main()
{
  int n, t, cont;  
  cin >> n;

  while(n > 0)
  {
    cont = 0;
    cin >> t;
    int tiros[t];
    char pulos[t+1];
    for(int i = 0; i < t; i++)
      cin >> tiros[i];
    cin >> pulos;
    for(int i = 0; i < t; i++)
    {
      if(pulos[i] == 'S' and (tiros[i] == 1 or tiros[i] == 2))
        cont++;
      else if(pulos[i] == 'J' and tiros[i] > 2)
        cont++;
    }
    cout << cont << endl;
  n--;
  }

  return 0;
}