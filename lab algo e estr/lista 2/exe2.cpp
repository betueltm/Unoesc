#include <iostream>
#include <string>
using namespace std;

string categoria(int idade);

int main()
{
	int idade;
	cout << "Informe a idade do nadador: ";
	cin	>> idade;
	cout << "Nadador enquadra-se em " << categoria(idade) << endl;
}

string categoria(int idade)
{
	if ( idade < 5)
		return ("Valor informado é invalido.");
	else if ( idade >= 5  && idade <= 7 )
		return ("(1) Infantil A");
	else if ( idade <= 10 )
		return ("(2) Infantil B");
	else if ( idade <= 13 )
		return ("(3) Juvenil A");
	else if ( idade	<= 17 )
		return ("(4) Juvenil B");
	else if ( idade	>= 18 )
		return ("(5) Adulto");
}