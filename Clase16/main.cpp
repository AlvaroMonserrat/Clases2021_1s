#include <iostream>

using namespace std;

struct Name
{
    char c;
    int a;
    int b;
    float d;
};


int main()
{
    Name pedro = {'A', 30, 20, 10.5};
    Name maria = {'M', 85, 15, 15.5};
    Name juan = {'J', 10, 5, 1.8};



    cout << pedro.c << endl;
    cout << maria.c << endl;
    cout << juan.c << endl;

    pedro.c = 'Z';
    cout << pedro.c << endl;

    return 0;
}
