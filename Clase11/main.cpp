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

//    printf("direccion m_button %p\n", &m_button);
//    printf("direccion m_button.width %p\n", &m_button.width);
//    printf("direccion m_button.width %p\n", &m_button.height);
//
//    print_info_rectangle(m_button);

    Rectangle* p_square = new Rectangle;

    (*p_square).height = 100;
    (*p_square).width = 50;
    p_square->height=30;

    printf("direccion p_square %p\n", p_square);
    cout << p_square->height << endl;


    return 0;
}

void print_info_rectangle(Rectangle rect)
{
   printf("direccion rect %p\n", &rect);
   printf("direccion rect.width %p\n", &rect.width);
   cout << "El ancho del rectangulo es: " << rect.width << endl;
   cout << "El alto del rectangulo es: " << rect.height << endl;
}
