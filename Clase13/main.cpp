#include <iostream>

using namespace std;

struct LinkedList
{
    double dollarValue;
    LinkedList* next;
};

int main()
{

    double dollar = 0;

    LinkedList dollarList = nullptr;
    dollarList = new LinkedList();

    while(dollar != -1)
    {
        cout << "Ingrese el valor del dolar, si desea salir el programa ingrese -1: ";
        cin >> dollar;
        if(dollar != -1)
        {

        }
    }

    return 0;
}
