#ifndef EJEMPLOS_INCLUDED
#define EJEMPLOS_INCLUDED

#include <iostream>


using namespace std;

//void repetir(string palabra, int veces);
//void multiplicador_array(int arreglo[], int cantidad, int multiplicador);
//void print_array(int arreglo[], int cantidad);
//const char* vocales();
//void invertir(int arreglo[], int cantidad);


const char* vocales(){
    static const char v[] = {'a', 'b', 'c', 'd', 'e'};
    return v;
}

void repetir(string palabra, int veces)
{
    for(int i=0; i < veces; ++i)
    {
        cout << palabra << endl;
    }
}


void multiplicador_array(int arreglo[], int cantidad, int multiplicador)
{
    for(int i=0; i < cantidad; ++i)
    {
        arreglo[i] = arreglo[i] * multiplicador;
    }
}

void print_array(int arreglo[], int cantidad)
{
    for(int i=0; i < cantidad; ++i)
    {
        cout << arreglo[i] << endl;
    }
}

void invertir(int arreglo[], int cantidad){

    int index_max = cantidad - 1;

    for(int i = 0; i < (cantidad/2); ++i)
    {
        int temporal = arreglo[i];
        arreglo[i] = arreglo[index_max-i];
        arreglo[index_max-i] = temporal;
    }
}

string invertir_str(string str){

    string temp = "";

    for(int i = str.size(); i >= 0; i--)
    {
        temp.push_back(str[i]);
    }

    return temp;
}

/*
Count the number of Duplicates
Write a function that will return the count of distinct case-insensitive alphabetic
characters and numeric digits that occur more than once in the input string.
The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.

Example
"abcde" -> 0 # no characters repeats more than once
"aabbcde" -> 2 # 'a' and 'b'
"aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
"indivisibility" -> 1 # 'i' occurs six times
"Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
"aA11" -> 2 # 'a' and '1'
"ABBA" -> 2 # 'A' and 'B' each occur twice
*/
size_t duplicateCount(const char* in)
{

    std::string text;
    text.append(in);

    int count = 0;
    int n_repeated = 0;

    char* p_counted = new char[text.length()];

    for(int i = 0; (unsigned)i < text.length(); ++i)
    {

        //Revisar si el caracter ya fue contado
        bool is_counted = false;
        for(int k = 0; (unsigned)k < text.length(); ++k)
        {
            if(p_counted[k] == in[i] || in[i]-p_counted[k] == 32 || in[i]-p_counted[k] == -32)
            {
                is_counted = true;
                break;
            }
        }

        if(!is_counted)
        {
            //Cuenta el número de letras
            for(int j = 0; (unsigned)j < text.length(); ++j)
            {
                if(in[i] == in[j] || in[i]-in[j] == 32 || in[i]-in[j] == -32)
                {
                    n_repeated++;
                }
            }
        }

        //El número de characteres es mayor a uno. Cuenta y reinicia el numero de repeticiones
        if(n_repeated > 1)
        {
            p_counted[count] = in[i];
            count++;
        }
        n_repeated = 0;


    }
    delete[] p_counted;

    return count;
}

#endif // EJEMPLOS_INCLUDED
