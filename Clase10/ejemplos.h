#ifndef EJEMPLOS_INCLUDED
#define EJEMPLOS_INCLUDED


void repetir(string palabra, int veces);
void multiplicador_array(int arreglo[], int cantidad, int multiplicador);
void print_array(int arreglo[], int cantidad);
const char* vocales();
void invertir(int arreglo[], int cantidad);


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


#endif // EJEMPLOS_INCLUDED
