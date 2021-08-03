#include <iostream>
#include <math.h>

using namespace std;


struct Point2D
{
    float x;
    float y;
};

struct Line2D
{
    Point2D startPoint;
    Point2D endPoint;
};

void print_pointInfo(Point2D point);
void print_lineInfo(Line2D line);
float longitud_line(Line2D line);

int main()
{
    Point2D p1 = {9, 7};
    Point2D p2 = {3, 2};

    Line2D oneLine = {p1, p2};

    print_lineInfo(oneLine);

    cout << longitud_line(oneLine) << endl;

    return 0;
}


void print_pointInfo(Point2D point)
{
    cout << "(" << point.x << ", " << point.y << ")" << endl;

}

void print_lineInfo(Line2D line)
{
    print_pointInfo(line.startPoint);
    print_pointInfo(line.endPoint);
}

float longitud_line(Line2D line)
{
    float diff_x = line.startPoint.x - line.endPoint.x;
    float diff_y = line.startPoint.y - line.endPoint.y;

    float longitud = sqrt(pow(diff_x, 2) + pow(diff_y, 2));

    return longitud;
}
