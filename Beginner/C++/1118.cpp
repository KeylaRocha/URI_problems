#include<iostream>
#include<iomanip>

using namespace std;

int main(){

  double nota1, nota2;
  int opcao = 1;

  while(opcao != 2){

    while(1){ //continua em loop enquanto nota1 for invalida
      cin >> nota1;
      if(nota1 < 0 or nota1 > 10)
        cout << "nota invalida" << endl;
      else
        break;
    }

    while(1){ //continua em loop enquanto nota2 for invalida
      cin >> nota2;
      if(nota2 < 0 or nota2 > 10)
        cout << "nota invalida" << endl;
      else
        break;
    }

    double media = (nota1+nota2)/2;

    cout << fixed << setprecision(2) << "media = " << media << endl;
    
    while(1){ //Continua enquanto não houver uma entrada valida
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> opcao;
      if(opcao == 1 or opcao == 2)
        break;
    }
  
  }

  return 0;

}