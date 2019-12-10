#include<iostream>

using namespace std;

int main()
{
  int ca, ba, pa, cr, br, pr, faltantes = 0;
  cin >> ca >> ba >> pa;
  cin >> cr >> br >> pr;

  if(ca < cr)
    faltantes += cr - ca;
  if(ba < br)
    faltantes += br - ba;
  if(pa < pr)
    faltantes += pr - pa;

  cout << faltantes << endl;

  return 0;
}