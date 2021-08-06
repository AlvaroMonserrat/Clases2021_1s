#include <iostream>

using namespace std;

struct LinkedList
{
    double dollarValue;
    LinkedList* next;
};

void print_dollar_list(LinkedList* lista);
void insert_element(LinkedList* lista, double newDollar);
//void delete_element(LinkedList* lista);

int main()
{

    LinkedList* head = nullptr;
    LinkedList* second = nullptr;
    LinkedList* third = nullptr;

    head = new LinkedList;
    second = new LinkedList;
    third = new LinkedList;

    head->dollarValue = 720;
    head->next = second;

    second->dollarValue = 710;
    second->next = third;


    third->dollarValue = 700;
    third->next = nullptr;

    insert_element(head, 732);

    print_dollar_list(head);

    delete head;
    delete second;
    delete third;

    return 0;
}

void print_dollar_list(LinkedList* lista)
{
    while(lista != nullptr)
    {
        cout << "Valor de dolar ingresado: "<< lista->dollarValue << endl;
        lista = lista->next;
    }

}

void insert_element(LinkedList* lista, double newDollar)
{
    while(lista->next != nullptr)
    {
        lista = lista->next;
    }

    LinkedList* newElement = new LinkedList;
    newElement->dollarValue = newDollar;
    newElement->next = nullptr;
    lista->next = newElement;
}

