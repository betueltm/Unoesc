#include <iostream>
using namespace std;

int main()
{
	int n, i, acima_cinco = 0;
	cout << "Informe a quantidade de alunos:  ";
	cin >> n;
	float	media = 0.0, temp = 0.0;
	for (i = 0; i < n; i++)
	{

		cout << "Informe a nota do aluno " << i << ": ";
		cin	>> temp;
		media += temp;
		if ( temp > 5 )
		{
			acima_cinco++;
		}
	}
	cout << "Média das notas: " << (media/n) << endl;
	if ( acima_cinco > 0 )
	{
		cout << "Quantidade de alunos com nota maior que 5: " << acima_cinco << endl;
	}
	else
	{
		cout << "Não ha aluno(s) com nota maior que 5" << endl;
	}	
}