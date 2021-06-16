#include <iostream>
#include <math.h>

using namespace std;

//Declaración de función
void funcion_modifica(int x);

int main()
{
    int x = 10;

    funcion_modifica(x);

    cout << "x: "<< &x << endl;

    return 0;
}


void funcion_modifica(int a)
{
    //Crea una nueva variable y le asigna el valor entregado de 10
    //int a = 10;
    cout << "a: "<< &a << endl;
    //La variable a=10 se destruye al final de bloque de código
}



void funciones_math()
{
    //Potencia
    cout << pow(2, 8) << endl;

    //Raiz
    cout << sqrt(2) << endl;

    //Absoluto
    cout << abs(-25) << endl;

    //coseno
    cout << cos(M_PI) << endl;


}

void distancia_puntos()
{
    //
    double puntoA[2] = {2, 2};
    double puntoB[2] = {2, 4};

    double diff_x = puntoB[0] - puntoA[0];
    double diff_y = puntoB[1] - puntoA[1];

    double distancia =   sqrt(pow(diff_x, 2) + pow(diff_y, 2));

    cout << distancia << endl;
}


