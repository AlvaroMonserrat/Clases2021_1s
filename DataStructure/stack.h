#ifndef STACK_INCLUDED
#define STACK_INCLUDED

#include <limits>

struct Stack
{
    int top;
    int capacity;
    int* data;
};

bool isFull(Stack* s)
{
    return s->top == (s->capacity -1);
}

bool isEmpty(Stack* s)
{
    return s->top == -1;
}

int peek_stack(Stack* s)
{
    if(isEmpty(s))
    {
        std::cout << "Stack is Empty" << std::endl;
        return 0;
    }

    return s->data[s->top];

}

Stack* createStack(int capacity)
{
    Stack* new_stack = new Stack;

    new_stack->capacity = capacity;
    new_stack->top = -1;
    new_stack->data = new int[capacity];

    return new_stack;
}

void push_stack(Stack* s, int data)
{
    if(!isFull(s))
        s->data[++s->top] = data;
    else
        std::cout << "Stack OverFlow" << std::endl;
}

int pop_stack(Stack* s)
{
    if(isEmpty(s))
    {
        std::cout << "Stack UnderFlow" << std::endl;
        return 0;
    }
    else
    {
        return s->data[s->top--];
    }

}





#endif // STACK_INCLUDED
