#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double m[12][12], soma;
  char o;
  
  cin >> o;
  for (int i = 0; i < 12; i++)
    for (int j = 0; j < 12; j++)
      cin >> m[i][j];
  
  soma = m[1][11] + m[2][10] + m[2][11] + m[3][9] + m[3][10] + 
         m[3][11] + m[4][8] + m[4][9] + m[4][10] + m[4][11] + 
         m[5][7] + m[5][8] + m[5][9] + m[5][10] +m[5][11] + 
         m[6][7] + m[6][8] + m[6][9] + m[6][10] + m[6][11] + 
         m[7][8] + m[7][9] + m[7][10] + m[7][11] + m[8][9] + 
         m[8][10] + m[8][11] + m[9][10] + m[9][11] + m[10][11];
  
  if(o == 'S')
    cout << fixed << setprecision(1) << soma << endl;
  else if(o == 'M')
    cout << fixed << setprecision(1) << soma/30.0 << endl;
  
  


  return 0;
}