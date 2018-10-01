#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  double renda;
  cin >> renda;

  if(renda >= 0.0 and renda <= 2000.0)
    cout << "Isento" << endl;
    
  else if(renda > 2000.0 and renda <= 3000.0){
    double imposto = (renda - 2000.0)*0.08;
    cout << fixed << setprecision(2) << "R$ " << imposto << endl;
  }

  else if(renda > 3000.0 and renda <= 4500.0){
    double imposto = (renda - 3000.0)*0.18 + 1000.0*0.08;
    cout << fixed << setprecision(2) << "R$ " << imposto << endl;
  }

  else{
    double imposto = (renda - 4500.0)*0.28 + 1500.0*0.18 + 1000.0*0.08;
    cout << fixed << setprecision(2) << "R$ " << imposto << endl;
  }

  return 0;
}