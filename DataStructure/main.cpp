#include "linkedlist.h"


int main()
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

    return 0;
}


