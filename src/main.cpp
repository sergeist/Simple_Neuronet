#include <iostream>
#include <caca_conio.h>
#include <clocale>
#include <vector>
using namespace std;

struct neuron
{
    double input_dendrit;
    double output_akson;
};

void fill_array(vector<vector<neuron>>&obj, int x, int y);
void schow(vector<vector<neuron>>&obj, int x, int y);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "rus");

    const int x = 3;
    const int y = 3;
    vector<vector<neuron>> nets(y, vector<neuron>(x));

    fill_array(nets, x, y);
    schow(nets, x, y);
    
    return 0;
}

void fill_array(vector<vector<neuron>>&obj, int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "input dendrit" << endl;
            cin >> obj[y][x].input_dendrit;

            cout << "input akson" << endl;
            cin >> obj[y][x].output_akson;
        }
    }
}

void schow(vector<vector<neuron>>&obj, int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "input_dendrit : " << obj[y][x].input_dendrit << "input_akson : " << obj[y][x].output_akson << endl;
        }
    }
}