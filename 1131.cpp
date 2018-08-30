#include <iostream>

using namespace std;

int main()
{
    int nGrenal;
    int grenais = 0;
    int ptInter, ptGremio;
    int vitInter = 0, vitGremio = 0, empate = 0;
    while(true)
    {
        cin >> ptInter >> ptGremio;
        if(ptInter > ptGremio)
            ++vitInter;
        if(ptInter < ptGremio)
            ++vitGremio;
        if(ptInter == ptGremio)
            ++empate;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> nGrenal;
        grenais++;
        if(nGrenal == 2)
            break;
    }
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << vitInter << endl;
    cout << "Gremio:" << vitGremio << endl;
    cout << "Empates:" << empate << endl;

    if(vitInter > vitGremio)
        cout << "Inter venceu mais" << endl;
    if(vitInter < vitGremio)
        cout << "Gremio venceu mais" << endl;

    return 0;
}

