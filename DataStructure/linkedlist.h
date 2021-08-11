#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <iostream>

using namespace std;


struct Node
{
    int pesos;
    Node* next;
};

//Agregar un nodo al final LinkedList
void append_node(Node** ref_head, int pesos)
{
    Node* new_node = new Node;
    new_node->pesos = pesos;
    new_node->next = nullptr;

    if((*ref_head) == nullptr)
    {
        (*ref_head) = new_node;
        return;
    }


    Node* last = (*ref_head);

    while(last->next != nullptr)
    {
        last = last->next;
    }

    last->next = new_node;

    return;
}

// Agregar un nuevo nodo al principio de la LinkedList
void push_node(Node** head_ref, int pesos)
{
    Node* newNode = new Node;

    newNode->pesos = pesos;

    newNode->next = (*head_ref);

    (*head_ref) = newNode;
}

//Mostrar en consola todo los datos
void print_all_nodes(Node* n)
{
    if(n == nullptr)
    {
        cout << "LinkedList is empty!" << endl;
    }

    while(n != nullptr)
    {
        cout << n->pesos << endl;
        n = n->next;
    }
}

//Eliminar el ultimo nodo de la lista
void remove_last(Node** ref_head)
{
    if((*ref_head) != nullptr)
    {
        if((*ref_head)->next != nullptr)
        {
            Node* last = (*ref_head);
            Node* prev = last;

            while(last->next != nullptr)
            {
                prev = last;
                last = last->next;
            }

            prev->next =nullptr;

            delete last;
        }else
        {
            delete (*ref_head);
            (*ref_head) = nullptr;
        }

    }
}

//Retorna la cantidad de nodos
int amount_of_nodes(Node* n)
{
    int i = 0;
    while(n != nullptr)
    {
        n = n->next;
        i++;
    }
    return i;
}

//  Elimina todo los Nodos
void remove_all_nodes(Node** ref_head)
{
    int nodes = amount_of_nodes(*ref_head);
    for(int i = 0; i < nodes; i++)
    {
        remove_last(ref_head);
    }

}

bool delete_node(Node** ref_head, int peso)
{
    Node* node_finder = (*ref_head);
    Node* node_prev = nullptr;

    if((*ref_head) != nullptr && (*ref_head)->pesos == peso)
    {
        (*ref_head) = (*ref_head)->next;
        //delete (*node_finder);
        return true;
    }
    else
    {
        while(node_finder != nullptr && node_finder->pesos != peso)
        {
             node_prev = node_finder;
             node_finder = node_finder->next;
        }

        if(node_prev ==  nullptr)
            return false;

        node_prev->next = node_finder->next;

        delete node_finder;

        return true;
    }


    return false;
}

bool delete_node_by_index(Node** ref_head, int index)
{
    int size_nodes = amount_of_nodes(*ref_head);
    if(index >= size_nodes || index < 0)
        return false;

    //Obtener Nodo a Eliminar y Nodo previo para enlazar
    Node* rem = (*ref_head);
    Node* prev = nullptr;

    //Caso especial, el nodo a eliminar es el head. index = 0
    if(index == 0)
    {
        (*ref_head) = (*ref_head)->next;
        delete rem;

        return true;
    }
    else
    {
        for(int i = 0; i < index; i++)
        {
            prev = rem;
            rem = rem->next;
        }

        //Enlazar
        prev->next = rem->next;

        //Remover
        delete rem;

        return true;
    }

    return false;

}

void print_amount_of_nodes(Node* head)
{
    cout << "La LinkedList tiene "<< amount_of_nodes(head) << " nodo(s)."<< endl;
}

void testLinkedList()
{
    Node* head = new Node;


    head->pesos = 1000;
    head->next = nullptr;

    append_node(&head, 300);
    append_node(&head, 600);
    append_node(&head, 500);

    print_all_nodes(head);

    cout << "---------------------" << endl;

    push_node(&head, 250);
    push_node(&head, 250);
    push_node(&head, 250);
    push_node(&head, 800);

//    remove_last(&head);
//    remove_last(&head);
//    remove_last(&head);
//    remove_last(&head);
//    remove_last(&head);
//    remove_last(&head);
//    remove_all_nodes(&head);
//
//    append_node(&head, 5000);
//    push_node(&head, 5000);
    delete_node(&head, 1000);

    delete_node_by_index(&head, 0);
    delete_node_by_index(&head, 0);
    print_all_nodes(head);
    print_amount_of_nodes(head);

}

#endif // LINKEDLIST_H_INCLUDED
