#include<iostream>

using namespace std;
//Player characteristics
struct player{
    string name;
    string choice;
    unsigned N;
};

int main(){
  int loops;
  player player1, player2;
  cin >> loops;

  while(loops > 0){
    cin >> player1.name >> player1.choice;
    cin >> player2.name >> player2.choice;
    cin >> player1.N >> player2.N;

    int result = player1.N + player2.N;
    if(result%2 == 0){

      if(player1.choice == "PAR")
        cout << player1.name << endl;

      else
        cout << player2.name << endl;
    }
    else
      if(result%2 == 1){

      if(player1.choice == "IMPAR")
        cout << player1.name << endl;

      else
        cout << player2.name << endl;
      }
    loops--;
  }

  return 0;
}