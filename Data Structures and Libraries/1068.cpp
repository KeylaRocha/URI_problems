
#include <iostream>
#include<stack>

using namespace std;
 
bool check(string &st);

int main(){
  string st;
  while(getline(cin, st)){

    if(check(st) == true)
      cout << "correct" << endl;

    else
      if(check(st) == false)
        cout << "incorrect" << endl;
  }

  return 0;
}

bool check(string &st){
  stack<char> pilha;

  for(char c : st){ //para cada caractere na string

    switch(c){
			case '(': //se for '(' coloca na pilha
				pilha.push(c);
				break;

      case ')':
				if(pilha.empty() || pilha.top()!='(') //Se o ')' não tiver par, está incorreto
          return false;

				pilha.pop(); // se tiver, tira o par dele da pilha;
				break;  
    }
  }
  return pilha.empty();
}