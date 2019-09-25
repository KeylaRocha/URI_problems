#include <iostream>

using namespace std;
int main ()
{
  int n, la, lb, sa, sb;
  cin >> n >> la >> lb >> sa >> sb;

  if(n >= la and n >= sa and n <= lb and n <= sb)
    cout << "possivel" << endl;

  else
    cout << "impossivel" << endl;

  
  return 0;
}