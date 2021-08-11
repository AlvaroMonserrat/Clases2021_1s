#include "linkedlist.h"
#include "stack.h"

int main()
{
    Stack* pila = createStack(10);

    push_stack(pila, 20);
    push_stack(pila, 30);
    push_stack(pila, 40);
    push_stack(pila, 50);

    std::cout << peek_stack(pila) << std::endl;
    std::cout << pop_stack(pila) << std::endl;
    std::cout << peek_stack(pila) << std::endl;


    return 0;
}


