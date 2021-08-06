#include <iostream>

using namespace std;

// Declaramos
double promedio(double a, double b);
void mostrar_promedio(double promedio);


int main()
{
    double data = promedio(2, 3);

    cout << "El dato regresado es: " << data << endl;

    return 0;
}


//Definicion
void mostrar_promedio(double promedio)
{
    cout << promedio << endl;
}

//Definicion
double promedio(double a, double b)
{
    double prom = (a + b) / 2;

    mostrar_promedio(prom);

    return prom;
}
