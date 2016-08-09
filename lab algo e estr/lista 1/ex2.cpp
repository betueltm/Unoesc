#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, m = 0, soma = 0, i = 1;
	cout << "Informe um número para saber se o mesmo é perfeito: ";
	cin >> n;
	while(soma < n)
	{
		if ( i%2 != 0 )
		{
			m++;
			soma += i;
		}
		i++;
	}
	if ( sqrt(n) == m )
	{
		cout << n << " é um número perfeito." << endl;
	}
	else
	{
		cout << n << " não é um número perfeito." << endl;
	}
}