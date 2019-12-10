#include<iostream>
#define PI 3.1415

using namespace std;

int main(){
  int R, L; //váriáveis para o raio e a quantidade em litros de gas
  cin >> R >> L;

  double volume = (4*PI*R*R*R)/3; // Calculo do volume de cada balão

  int baloes = L/volume; //Numero de balões que serão enchidos completamente
  
  cout << baloes << '\n';
  
  return 0;
}