#include<iostream>

using namespace std;

int main(){
  string a, b, c;
  cin >> a;
  cin.ignore();
  cin >> b;
  cin.ignore();
  cin >> c;
  if(a == "vertebrado" || b == "vertebrado" || c == "vertebrado"){
    if(a == "ave" || b == "ave" || c == "ave"){
      if(a == "carnivoro" || b == "carnivoro" || c == "carnivoro")
        cout << "aguia" << endl;

      else if(a == "onivoro" || b == "onivoro" || c == "onivoro")
        cout << "pomba" << endl;
    }

    else if(a == "mamifero" || b == "mamifero" || c == "mamifero"){
      if(a == "onivoro" || b == "onivoro" || c == "onivoro")
        cout << "homem" << endl;

      else if(a == "herbivoro" || b == "herbivoro" || c == "herbivoro")
        cout << "vaca" << endl;      
    }
  }

  if(a == "invertebrado" || b == "invertebrado" || c == "invertebrado"){
    if(a == "inseto" || b == "inseto" || c == "inseto"){
      if(a == "hematofago" || b == "hematofago" || c == "hematofago")
        cout << "pulga" << endl;
      
      else if(a == "herbivoro" || b == "herbivoro" || c == "herbivoro")
        cout << "lagarta" << endl;
    }
    else if(a == "anelideo" || b == "anelideo" || c == "anelideo"){
      if(a == "hematofago" || b == "hematofago" || c == "hematofago")
        cout << "sanguessuga" << endl;
      
      else if(a == "onivoro" || b == "onivoro" || c == "onivoro")
        cout << "minhoca" << endl;
    }    
  }

  return 0;
}
