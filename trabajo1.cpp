#include "iostream"

using namespace std;

int main()
{
    int numerosimpares[100];
    int i, numero;
    numerosimpares[0] = 1;
    numero = 1;

    for (i = 1 ; i <= 100 ; i++)
    {
        numero = numero + 2;
        numerosimpares[i] = numero;
    }

    cout << "A continuacion se mostraran los 100 numeros impares" << endl;

    for (i = 99 ; i >= 0 ; i--)
    {
        cout << endl;
        cout << numerosimpares[i] << endl;
    } 

    return 0;
}