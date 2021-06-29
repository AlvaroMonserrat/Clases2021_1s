#include <iostream>

using namespace std;

//Declaración
void mostrar_letras(string palabra);

int main()
{
    mostrar_letras("C++ Programming");

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
