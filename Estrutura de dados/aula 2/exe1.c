#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

typedef struct{
	int numero;
	char titular[40];
	float saldo;
	int utilizado;
}Conta;

Conta betuel[15];

void mostraMenu(){
	printf("\n========== Banco SisInfo ========== \n");
	printf("Menu de Opções:\n");
	printf("<1> Cadastrar Conta Bancária\n");
	printf("<2> Listar todas as contas em tela\n");
	printf("<3> Consultar as contas de um cliente (pelo nome)\n");
	printf("<4> Consultar o saldo de uma conta (pelo numero conta)\n");
	printf("<0> Sair\n");
}

void cadastrarConta(){
	int indiceVago = 15, i, n_conta;

	for ( i = 0; i < 15; i++ ){
		if ( betuel[i].utilizado == 0 ){
			indiceVago = i;
			break;
		}
	}
	if ( indiceVago < 15 ){
		while(1){
			int existe = 0;
			printf("Informe o numero da conta: ");
			scanf("%d", &n_conta);
			for ( i = 0; i < 15; i++ ){
				if ( betuel[i].numero == n_conta ){
					existe = 1;
					break;
				}
			}
			if ( existe == 1 ){
				printf("Numero de conta ja cadastrada.\n");
			}else{
				betuel[indiceVago].numero = n_conta;
				break;
			}
		}
		fflush(stdin);
		printf("\n");
		fflush(stdin);
		printf("Informe nome do titular da conta: ");
		fflush(stdin);
		cin >> betuel[indiceVago].titular;//Nao consegui fazer o MacOS usar o gets(), portanto usei um pedaço de C++ aqui.
		printf("\nInforme o saldo da conta: ");
		scanf("%f", &betuel[indiceVago].saldo);
		betuel[indiceVago].utilizado = 1;
		printf("Cadastro efetuado.\n");
	}else{
		printf("Nao ha vagas para novos registros.\n");
	}
}
void mostraContas(){
	int i;
	printf("Contas Cadastradas:\n" );
	printf("Numero Conta	|Nome Titular	|\n");
	for (i = 0; i < 15; i++){
		if ( betuel[i].utilizado == 1 ){
			printf("%d		|%s		|\n", betuel[i].numero, betuel[i].titular);
		}
	}
}
void mostraContasNome(){
	char nome[40];
	int existe = 0, i;
	printf("Informe um nome para pesquisar: \n");
	cin >> nome;
	printf("Contas Cadastradas:\n" );
	printf("Numero Conta	|Nome Titular	|\n");
	for (i = 0; i < 15; i++){
		if (  strcmp(nome,betuel[i].titular) == 0 ){
			printf("%d		|%s		|\n", betuel[i].numero, betuel[i].titular);
		}
	}
}
void mostraSaldo(){
	int n_conta, i, existe = 15;
	printf("Informe o numero da conta: \n");
	scanf("%d", &n_conta);
	for (i = 0; i < 15; i++){
		if ( betuel[i].numero == n_conta ){
			existe = i;
		}
	}
	if ( existe < 15 ){
		printf("Saldo: R$ %0.2f\n", betuel[existe].saldo );
	}else{
		printf("Conta inexistente.\n");
	}
}
void zeraContas(){
	for (int i = 0; i < 15; i++){
		betuel[i].utilizado = 0;
	}
}

int main(){
	zeraContas();
	int opcao;
	while(1){
		system("clear");//alternativa para o "cls" do windows
		mostraMenu();
		scanf("%d", &opcao);
		if ( opcao == 0 ){
			break;
		}else if ( opcao == 1 ){
				system("clear");
				cadastrarConta();
				system("read -n1");//alternativa para o "pause" do windows
		}
		else if ( opcao	== 2 ){
				system("clear");
				mostraContas();
				system("read -n1");
		}
		else if ( opcao == 3 ){
				system("clear");
				mostraContasNome();
				system("read -n1");
		}
		else if ( opcao == 4 ){
				system("clear");
				mostraSaldo();
				system("read -n1");
		}
		else{
				printf("Opção inválida.\n");
		}
	}
}