#include <iostream>
using namespace std;

int main()
{
	int n, i, volta_melhor_tempo = 0;
	float tempo_melhor_volta = 0.0, temp, media = 0.0;
	cout << "Informe a quantidade de voltas:  ";
	cin >> n;
	for (i = 0; i < n; i++)
	{

		cout << "Informe o tem da volta " << i << ": ";
		cin	>> temp;
		if (i == 0)
		{
			tempo_melhor_volta = temp;
		}
		else
		{
			if ( temp < tempo_melhor_volta )
			{
				tempo_melhor_volta = temp;
				volta_melhor_tempo = i;
			}
		}
		media += temp;
	}
	cout << "O melhor tempo é: " << tempo_melhor_volta << endl;
	cout << "Volta em que ocorreu o melhor tempo: " << volta_melhor_tempo << endl;
	cout << "Tempo médio das " << n << " voltas: " << media/n << endl;
}