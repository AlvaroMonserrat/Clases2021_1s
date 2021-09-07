#include <iostream>


/*Perceptrón*/

using namespace std;

struct Training
{
    int input[3];
    int solution;
};

void print_array(int arr[], int n);

//Weight
double w1 = 0;
double w2 = 0;
double w3 = 0;

//Umbral
double u = 0.5;

//Taza de Aprendizaje
double r = 1;

double sum_input(int in[]);
double function_perceptron(double z);
void print_weights();

int main()
{
    //Wi' = Wi + (s - y) * Xi;

    // IF (z - u > 0) -> y = 1; else -> y = 0;

    // z = w1 * x1 + w2 * x2 + w3 * x3;

    //Data para entrenar
    Training t[4] = {{{1, 0, 0}, 1}, {{1, 0, 1}, 1}, {{1, 1, 0}, 1}, {{1, 1, 1}, 0}};

    //Entrenamiento
    double y;
    double error;
    double count_good = 0;

    int i = 0;
    while( count_good != 4)
    {
        i = 0;
        count_good = 0;
        while(i < 4)
        {
            y = function_perceptron(sum_input(t[i].input));
            error = t[i].solution - y;
            w1 = w1 + r * (error) * t[i].input[0];
            w2 = w2 + r * (error) * t[i].input[1];
            w3 = w3 + r * (error) * t[i].input[2];

            print_weights();
            i++;

            if(error == 0)
            {
                count_good++;
            }
        }

        cout << count_good << endl;
    }

    return 0;
}

double sum_input(int in[])
{
    double z = in[0] * w1 + in[1] * w2 + in[2] * w3;

    return z;
}

double function_perceptron(double z)
{
    if(z - u > 0)
    {
        return 1;
    }
    return 0;
}

void print_weights()
{
    cout << "("<< w1 << ", " << w2 << ", " << w3 << ")"<< endl;
}


