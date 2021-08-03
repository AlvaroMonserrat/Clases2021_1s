#include <iostream>

using namespace std;


struct Rectangle
{
    int width;
    int height;
};

void print_info_rectangle(Rectangle rect);

int main()
{
    Rectangle m_button = {20, 10};

    cout << sizeof(float) << endl;

    printf("direccion m_button %p\n", &m_button);
    printf("direccion m_button.width %p\n", &m_button.width);

    print_info_rectangle(m_button);

    double* accountDollar = new double;

    *accountDollar = 511121;

    cout << *accountDollar << endl;

    delete accountDollar;

    return 0;
}

void print_info_rectangle(Rectangle rect)
{
   printf("direccion rect %p\n", &rect);
   printf("direccion rect.width %p\n", &rect.width);
   cout << "El ancho del rectangulo es: " << rect.width << endl;
   cout << "El alto del rectangulo es: " << rect.height << endl;
}
