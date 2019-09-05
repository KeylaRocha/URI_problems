#include <iostream>

using namespace std;

int main()
{
  int n, x, y;
  cin >> n; 

  for(int i = 0; i < n; i++)
  {
    cin >> x >> y;
    int area = (x * y)/2; //Area do losango: (lado maior*lado menor)/2
    cout << area << " cm2" << endl;
  }

  return 0;
}