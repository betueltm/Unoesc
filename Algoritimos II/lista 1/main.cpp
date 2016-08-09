#include "betuel"

int main (){
	while(1)
	{	
		system("clear");
		int opcao, temp;
		cout << "Digite a opção desejada" << endl;
		cout << "1 - Para Conversão de Dólar/Real" << endl;
		cout << "2 - Para Antecessor e Sucessor" << endl;
		cout << "3 - Para Divisores de um Número" << endl;
		cout << "4 - Para Calculo de Gorjeta" << endl;
		cout << "5 - Para Soma Estranha" << endl;
		cout << "6 - Para Fatorial" << endl;
		cout << "0 - Para Sair" << endl;
		cin	>> opcao;
		if ( opcao == 0 )
		{
			break;
		}
		else
		{
			if ( opcao == 1 )
			{
				int op;
				float cotacao;
				float valor;
				while(1){
					system("clear");
					cout << "Digite uma opcao " << endl;
				    cout << "1 - Dólar para Real" << endl;
				    cout << "2 - Real para Dólar" << endl;
				    cin	>> op;
				    if ( op == 1 || op == 2 )
				    {
				    	break;
				    }
				    else
				    {
				    	cout << "Opção inválida.";
				    }
				}
				cout << "Digite o valor da cotação do Dólar: ";
				cin	>> cotacao;
				cout << "Digite o valor a converter: ";
				cin	>> valor;
				cout << "Valor convertido: " << ConverteMoeda(op,valor,cotacao) << endl;
				system("read -n1");
			}
			else
			{
				if ( opcao == 2 )
				{
					cout << "Informe um valor inteiro: ";
					cin	>> temp;
					cout << "O Antecessor de " << temp << " é " << retornaAntecessor(temp) << " e seu sucessor é " << retornaSucessor(temp) << endl;
					system("read -n1");
				}
				else
				{
					if ( opcao == 3 )
					{
						cout << "Informe um valor inteiro positivo: ";
						cin >> temp;
						retornaDivisores(temp);
						system("read -n1");
					} 
					else
					{
						if ( opcao == 4 )
						{
							float consumido, taxa;
							cout << "Informe o valor consumido: ";
							cin	>> consumido;
							cout << "Informe a taxa da gorjeta: ";
							cin >> taxa;
							calculaGorjeta(consumido,taxa);
							system("read -n1");
						}
						else
						{
							if ( opcao == 5 )
							{
								int y;
								cout << "Informe um valor: ";
								cin	 >> y;
								somaEstranha(y);
								system("read -n1");
							}
							else
							{
								if ( opcao	== 6 ) 
								{
									cout << "Informe um valor inteiro positivo: ";
									cin >> temp;
									cout << fatorial(temp) << endl;
									system("read -n1");
								}
								else
								{
									cout << "Opção inválida." << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}