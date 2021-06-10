#include <iostream>

using namespace std;

//Declaro un función
int suma(int a, int b);


int main()
{
    string nombre = "Alvaro";
    string apellido = "Monserrat";

    string nombreCompleto = nombre + " " + apellido;

    cout << nombreCompleto;

    return 0;
}



int suma(int a, int b)
{
    return a + b;
}

void matriz_2x2()
{
    int matriz[3][4] = {{3, 5, 6, 1}, {7, 8, 1, 4}, {10, 23, 31, 44}};

    cout << matriz[2][3];
}


void palabra_invertida()
{
    char word[] = {'H', 'o', 'l', 'a'};

    for(int z = (sizeof(word) - 1); z >= 0; z--)
    {
        cout << word[z] <<endl;
    }
}

void recorrer_array()
{
    int data[6] = {50, 36, 70, 65, 68, 100};


    int posicion = 0;

    while(posicion < 6)
    {
        cout << data[posicion] << endl;
        posicion = posicion + 1;
    }
}


