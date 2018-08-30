#include<iostream>
#include<cmath>

using namespace std;

void troca(float &A, float &B);
void bubble(float vetor[], int tam);
void classificaTriangulo(float A, float B, float C);

int main()
{
    float lado[3];
    cin >> lado[0] >> lado[1] >> lado[2];
    bubble(lado, 3);
    classificaTriangulo(lado[0], lado[1], lado[2]);

    return 0;
}

void troca(float &A, float &B)
{
    float aux = A;
    A = B;
    B = aux;
}

void bubble(float vetor[], int tam)
{
    for(int i=0; i<tam-1; i++)
        for(int j=i+1; j<tam; j++)
            if(vetor[i] < vetor[j])
                troca(vetor[i], vetor[j]);

}

void classificaTriangulo(float A, float B, float C)
{
    if(A >= B + C)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
        return;
    }
    
    if(pow(A,2) == (pow(B,2) + pow(C,2)))
        cout << "TRIANGULO RETANGULO" << endl;

    else if(pow(A,2) > (pow(B,2) + pow(C,2)))
        cout << "TRIANGULO OBTUSANGULO" << endl;

    else if(pow(A,2) < (pow(B,2) + pow(C,2)))
        cout << "TRIANGULO ACUTANGULO" << endl;

    if(A == B && B == C)
        cout << "TRIANGULO EQUILATERO" << endl;

    else if(A == B || A == C || B == C)
        cout << "TRIANGULO ISOSCELES" << endl;

    return;
}
