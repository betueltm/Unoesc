#include <iostream>
#include <string>
using namespace std;

int positio(int valor)
{
	if ( valor > 0 )
	{
		return 1;
	} 
	else
	{
		return 0;
	}
}
int main ()
{
	int valor;
	cout << "Informe o um valor: ";
	cin >> valor;
	if ( positio(valor) == 1 )
	{
		cout << "Positivo." << endl;
	}
	else
	{
		cout << "Negativo" << endl;
	}
}