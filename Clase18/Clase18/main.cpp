#include <iostream>

using namespace std;

struct Point2D
{
    float x;
    float y;
};

struct Line2D
{
    Point2D startPoint; // 8byte
    Point2D endPoint; // 8 byte
};

struct Rect2D
{
    Line2D line1;
    Line2D line2;
    Line2D line3;
    Line2D line4;
};

//Declarar
void print_point2D(Point2D data);
void print_line2D(Line2D line);

int main()
{
    Point2D p1 = {500, 300};

    int a = 30;

    int *p_a = new int;
    (*p_a) = 50;

    //Pointer
    Point2D *p_point = new Point2D;


    p_point->x = 3;
    p_point->y = 2;

    (*p_point).x = 100;
    (*p_point).y = 200;


    p1.x = 1000;
    p1.y = 2000;

    print_point2D(*p_point);
    print_point2D(p1);

    //Liberar espacio en memoria
    delete p_point;

    return 0;
}

//Implementación o definición
void print_point2D(Point2D data)
{
    //Mostrar consola el valor del punto 2D
    // (x, y)
    cout << "("<< data.x << ", " << data.y  << ")"<< endl;
}

void print_line2D(Line2D line)
{
    //Mostrar en consola el punto de inicio de la línea y el punto final
    //Punto de inicio: (x1, y1) y Punto final (x2, y2)
    cout << "Punto de inicio: " << "("<< line.startPoint.x << ", " << line.startPoint.y << ")" << endl;
    cout << "Punto final: " << "("<< line.endPoint.x << ", " << line.endPoint.y << ")" << endl;
}


