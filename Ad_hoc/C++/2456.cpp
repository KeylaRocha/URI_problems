#include <iostream>

using namespace std;

int main()
{
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  if(A < B and B < C and C < D and D < E)
    cout << 'C' << endl;
  else if(A > B and B > C and C > D and D > E)
    cout << 'D' << endl;
  else
    cout << 'N' << endl;
    
  return 0;
}