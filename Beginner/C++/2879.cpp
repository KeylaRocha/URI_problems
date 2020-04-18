#include <iostream>

using namespace std;

int main()
{
  int n, porta, ponto = 0;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> porta;
    if(porta == 2 or porta == 3)
      ponto++;    
  }
  cout << ponto << endl;

  return 0;
}