#include <iostream>
//Escreva um programa que pede o raio de um círculo, e em seguida exiba o
//perímetro e área do círculo.
using namespace std;

int main()
{
    float area , raio , perimetro;

    cout << "informe o raio da circunferencia" << endl;
    cin >> raio;

    area = 3.14 * ( raio * raio );

    perimetro = 2 * 3.14 * raio;

    cout << " a area da circunferencia e : " << area << endl;
    cout << " o perimetro da circunferencia e :" << perimetro << endl;
    return 0;
}
