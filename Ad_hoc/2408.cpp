#include <iostream>

using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  //Se temos 3 valores e queremos o segundo, estamos procurando sempre o elemento do meio.
  //Se A estiver no meio, B<A<C ou B>A>C
  if ((B < A and A < C) or (B > A and A > C))
    cout << A << endl;

  //Se B estiver no meio, A<B<C ou A>B>C
  else if((A < B and B < C) or (A > B and B > C))
    cout << B << endl;

  //Se nem A e nem B estiverem no meio, C estará
  else 
    cout << C << endl;  

  return 0;
}