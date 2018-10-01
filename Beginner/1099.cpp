#include<iostream>

using namespace std;

int main(){
  int x, y, n;
  int sum;
  cin >> n;
  while(n > 0){
    sum = 0; //prevents errors
    cin >> x >> y;

    if (x == y)  //It's an open interval, can't use the limits and there's nothing between
      cout << 0 << endl;

    else if(x > y){ 
      y++; //can't use the lower limit
      for(; y < x; y++)  //from y+1 to x-1
        if(y%2 == 1)
          sum += y;
      cout << sum << endl;
    }

    else{
      x++;
      for(; x < y; x++)  //from x+1 to y-1
        if(x%2 == 1)
          sum += x;
      cout << sum << endl;
    }
    n--;
  }

  return 0;
}