#include <iostream>

using namespace std;

int main()
{
  int x, sum;
  cin >> x;
  while(x != 0)
  {  
    sum = 0;  
    if(x%2 != 0)
      x++;
    for(int j = 0; j < 5; j++, x+=2)
      sum += x;
    cout << sum << endl;
    cin >> x;
  }

  return 0;
}