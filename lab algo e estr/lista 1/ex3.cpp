#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float r;
	cout << "Informe o raio de uma esfera para obrter o volume: ";
	cin >> r;
	cout << "O volume da esfera é " << (4*3.14*(pow(r,3)))/3 << endl;
	cout << "A área da esfera é " << (4*3.14*(pow(r,2))) << endl;
}