#include <iostream>
using namespace std;

int idade(int anos,int meses,int dias)
{
	return ((anos*365)+(meses*30)+(dias));
}
int main()
{
	int anos,meses,dias;
	cout << "Informe os anos: ";
	cin >> anos;
	cout << "Informe os meses: ";
	cin >> meses;
	cout << "Informe os dias: ";
	cin >> dias;
	cout << "Você viveu " << idade(anos,meses,dias) << " dias" << endl;
}
