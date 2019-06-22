
#include <iostream>

using namespace std;

int main(){
  int c; //numero de casos teste
  char empty;
  string sheldonChoice, rajeshChoice;   //Escolhas dos personagens do problema
  cin >> c;
  for(int i = 0; i < c; i++){
    cin >> rajeshChoice >> sheldonChoice;  // empty serve pra pular o espaço entre as escolhas

    if(rajeshChoice == "pedra"){
      if(sheldonChoice == "pedra") cout << "empate" << endl;
      else if(sheldonChoice == "papel" || sheldonChoice == "spock") cout << "sheldon" << endl;
      else cout << "rajesh" << endl;
    }

    else if(rajeshChoice == "papel"){
      if(sheldonChoice == "papel") cout << "empate" << endl;
      else if(sheldonChoice == "tesoura" || sheldonChoice == "lagarto") cout << "sheldon" << endl;
      else cout << "rajesh" << endl;
    }

    else if(rajeshChoice == "tesoura"){
      if(sheldonChoice == "tesoura") cout << "empate" << endl;
      else if(sheldonChoice == "spock" || sheldonChoice == "pedra") cout << "sheldon" << endl;
      else cout << "rajesh" << endl;
    }

    else if(rajeshChoice == "lagarto"){
      if(sheldonChoice == "lagarto") cout << "empate" << endl;
      else if(sheldonChoice == "pedra" || sheldonChoice == "tesoura") cout << "sheldon" << endl;
      else cout << "rajesh" << endl;
    }

    else if(rajeshChoice == "spock"){
      if(sheldonChoice == "spock") cout << "empate" << endl;
      else if(sheldonChoice == "lagarto" || sheldonChoice == "papel") cout << "sheldon" << endl;
      else cout << "rajesh" << endl;
    }
    
  }

  return 0;
}