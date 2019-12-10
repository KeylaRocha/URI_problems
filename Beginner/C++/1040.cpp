#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double N1, N2, N3, N4, Media1, Media2, NExame;
    cin >> N1 >> N2 >> N3 >> N4;
    Media1 = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    cout << fixed << setprecision(1) << "Media: " << Media1 << endl;
    if(Media1 >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if(Media1 >= 5.0 && Media1 <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> NExame;
        cout << fixed << setprecision(1) << "Nota do exame: " << NExame <<endl;
        Media2 = (Media1 + NExame) / 2;
        if(Media2 >= 5)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << fixed << setprecision(1) << "Media final: " << Media2 << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}
