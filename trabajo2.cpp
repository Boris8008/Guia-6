#include "iostream"

using namespace std;

//PROCEDIMIENTO
void funcionx (int numero[], int t, int n)
{
    int repetir = 0;
    int NumeroArreglo = 0;
    for (int i = 0; i < t; i++)
    {
        if (n == numero[i])
        {
            repetir++;
            NumeroArreglo = numero[i];
        }
    }
    cout << "El numero " << " " << NumeroArreglo << " se repite" << " " << repetir << endl;
}


void funciony (int numero[], int t, int n){
    for (int i = 0; i < t; i++)
    {
        if (n == numero[i])
        {
            numero[i] = 0; 
        }
    }
}

int main()
{
    int numero[100], x, NumeroDeVeces=0;

    cout << endl;
    cout << "VECES QUE SE REPITE UN NUMERO EN DICHO ARREGLO " << endl << endl;

    cout << "Ingrese el numero de tama"<<char(164)<< "o del arreglo: ";
    cin >> x;

    for (int i=0; i<x; i++){
        cout << endl;
        cout << i+1 << " digite un numero" << endl;
        cin >>numero[i];
    }

    for (int i=0; i<x; i++){
        int n=numero[i];
        if(n != 0){
            funcionx (numero, x, n);
            funciony (numero, x, n);
        }
    }

    return 0;
}