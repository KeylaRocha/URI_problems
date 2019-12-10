#include <iostream>

using namespace std;

void quickSort(int *vetor, int inicio, int fim)
{
   int i, j, meio, aux;

   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];

   do
   {
      while(vetor[i] < meio)
         i++;
      while(vetor[j] > meio)
         j--;
      if(i <= j)
      {
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(i <= j);

   if(inicio < j)
      quickSort(vetor, inicio, j);
   if(i < fim)
      quickSort(vetor, i, fim);
}


int main()
{
    int a[3], b[3];
    cin >> a[0] >> a[1] >> a[2];
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    quickSort(a, 0, 2);
    cout << a[0] << endl << a[1] << endl << a[2] << endl;
    cout << endl;
    cout << b[0] << endl << b[1] << endl << b[2] << endl;

    return 0;
}

