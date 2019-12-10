
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double **matriz = new double*[12];
  for(int i = 0; i < 12; i++)
    matriz[i] = new double[12];
  
  int C;
  char T;

  cin >> C >> T;
  for (int i = 0; i < 12; i++)
    for (int j = 0; j < 12; j++)
      cin >> matriz[i][j];

  //soma fora do if pois será usada nas duas operações
  double sum = 0.0;
  for(int i = 0; i < 12; i++)
    sum += matriz[i][C];

  if(T == 'S')
    cout << fixed << setprecision(1) << sum << endl;

  else
    if(T == 'M'){
      double mean;
      
      mean = sum/12.0;
      cout << fixed << setprecision(1) << mean << endl;

    }
  
  return 0;
}