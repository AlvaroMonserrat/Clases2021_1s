#include <iostream>

/*Test Perceptrón*/

using namespace std;


double sum_input(double x1, double x2);
double function_perceptron(double z);

int main()
{
    double x1;
    double x2;
    double y;

    cout << "Compuerta Lógica NAND Entrenada " << endl;
    cout << "Ingrese la entrada x1: ";
    cin >> x1;
    cout << "Ingrese la entrada x2: ";
    cin >> x2;

    cout << "La Salida es y: " << function_perceptron(sum_input(x1, x2)) << endl;

    return 0;
}

double sum_input(double x1, double x2)
{
    double z = 1 * 3 + x1 * -2 + x2 * -1;

    return z;
}

double function_perceptron(double z)
{
    if((float)z - 0.5 > 0)
    {

        return 1;
    }
    return 0;
}
