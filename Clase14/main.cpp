#include <iostream>

using namespace std;

struct Name
{
    int a;
    int b;
    char c;
    float d;
};

double promedio(double a, double b);
void print_promedio(double a, double b);

int main()
{
    Name pedro = {20, 30, 'A', 14.5};
    Name sofia = {10, 30, 'S', 5.5};
    Name carla = {50, 30, 'C', 2.5};

    cout << pedro.a << endl;
    cout << pedro.b << endl;
    cout << pedro.c << endl;
    cout << pedro.d << endl;

    double data = 0;

    data = promedio(20.5, 30.1);

    cout << data << endl;

    print_promedio(20.5, 30.1);

    return 0;
}

double promedio(double a, double b)
{
    double data_a_retornar = (a + b) / 2;

    return data_a_retornar;
}

void print_promedio(double a, double b)
{
    cout << (a + b) / 2 << endl;
}

