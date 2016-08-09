#include <iostream>
using namespace std;

int paresVetor(int x[])
{
	int i, pares = 0;
	for ( i = 0; i < 15; i++ )
	{
		if ( x[i]%2 == 0 )
		{
			pares++;
		}
	}
	return pares;
}

void preencheVetor(int vetor[])
{
	int i;
	for (i = 0; i < 15; i++)
	{
		cout << "Informe o valor " << i << " do vetor x:";
		cin	>> vetor[i];
	}
}

int main()
{
	int x[15];
	preencheVetor(x);
	cout << "Quantidade de pares do vetor x: " << paresVetor(x) << endl;
}