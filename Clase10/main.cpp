#include <iostream>
#include "ejemplos.h"

using namespace std;

//Declaración
void mostrar_letras(string palabra);
string concadenar(string texto_a, string texto_b);

int main()
{
    string name = "This is an example!";

    string emna = invertir_str(name);

    cout <<  emna;

    return 0;
}

/*Función que recibe un texto e imprime en consola los carácteres por separados
    ejemplo: mostrar_letras(palabra)
    p
    a
    l
    a
    b
    r
    a
*/
//Definición
void mostrar_letras(string palabra)
{
    int cantidad_letras = palabra.size();

    int index = 0;

    while(index != cantidad_letras)
    {
        cout << palabra[index] << endl;
        index++;
    }
}

string concadenar(string texto_a, string texto_b)
{
    string nuevo_texto = texto_a + " " + texto_b;
    return nuevo_texto;
}
