
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main(){
  int n, m, p;  //Variaveis do problema
  string produto;
  double preco, gasto;
  int quantidade;
  map<string, double> compras;  //Acesso em map é mais rapido
  cin >> n;
  for(int i = 0; i < n; i++){   //loop das idas à feira
    gasto = 0;
    cin >> m;
    for(int j = 0; j < m; j++){   //loops de entrada de produtos disponiveis
      cin >> produto >> preco;
      compras[produto] = preco;   //se não tiver um nó com o produto, ele vai criar e atribuir o preço
    }
    cin >> p;
    for(int j = 0; j < p; j++){   //loop de itens comprados
      cin >> produto >> quantidade;
      gasto += ((quantidade*1.0) * compras[produto]);
    }
    cout << fixed << setprecision(2) << "R$ " << gasto << endl;
  }

  return 0;
}