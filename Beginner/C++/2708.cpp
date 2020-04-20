#include <iostream>

using namespace std;

int main()
{
  string movimento;
  int t, jipes = 0, pessoas = 0;
  cin >> movimento;
  while(movimento != "ABEND")
  {
    cin >> t;
    if(movimento == "SALIDA")
    {
      jipes++;
      pessoas += t;
    }
    else if(movimento == "VUELTA")
    {
      jipes--;
      pessoas -= t;
    }
    cin >> movimento;
  }

  cout << pessoas << endl << jipes << endl;

  return 0;
}