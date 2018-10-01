#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int casos;
    int alunos, media;
    int notas[alunos];
    cin >> casos;
    while(casos > 0)
    {
        int sum = 0, maior = 0;
        cin >> alunos;
        for(int i = 0; i < alunos; i++)
        {
            cin >> notas[i];
        }
        for(int i = 0; i < alunos; i++)
        {
            sum += notas[i];
        }
    media = sum/alunos;
    for(int i = 0; i < alunos; i++)
        {
            if(notas[i] > media)
                maior++;
        }
        cout << fixed << setprecision(3) << ((maior*100)/(alunos*1.0)) << "%" << endl;
        casos--;
    }
    return 0;
}