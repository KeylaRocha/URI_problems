#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
  map<int, double> cardapio;
  int p, q, codigo;
  double total = 0;
  
  cardapio[1001] = 1.5;
  cardapio[1002] = 2.5;
  cardapio[1003] = 3.5;
  cardapio[1004] = 4.5;
  cardapio[1005] = 5.5;
  
  cin >> p;
  for(int i = 0; i < p; i++)
  {    
    cin >> codigo >> q;
    total += q*cardapio[codigo];
  }
  
  cout << fixed << setprecision(2) << total << endl;
  
  return 0;
}