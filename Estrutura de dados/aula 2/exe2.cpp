#include <iostream>
using namespace std;

typedef struct
{
	int numero_aeronave;
	int qtd_assentos;
	int qtd_assentos_disponiveis;
	string nm_passageiros[100];
}Aeronave;

void mostraMenu();
void limpaAvioes(Aeronave vetor[],int tamanho_vetor);
void mostraAvioes(Aeronave vetor[],int nr_pesquisa,int tamanho_vetor);
void cadastraAvioes(Aeronave vetor[],int tamanho_vetor);
void reservaAssento(Aeronave vetor[],int tamanho_vetor);

int main ()
{
	Aeronave avioes[10];
	int opcao, avioes_tamanho;
	avioes_tamanho = (sizeof(avioes)/sizeof(Aeronave));
	limpaAvioes(avioes,avioes_tamanho);
	while(1)
	{
		system("clear");
		mostraMenu();
		cin >> opcao;
		if ( opcao == 0 ){
			break;
		}
		else if ( opcao == 2 ){
				system("clear");
				mostraAvioes(avioes,0,avioes_tamanho);
				system("read -n1");
		}
		else if ( opcao	== 1 ){
				system("clear");
				cadastraAvioes(avioes,avioes_tamanho);
				system("read -n1");
		}
		else if ( opcao == 3){
				int pesquisa;
				system("clear");
				cout << "Informe o numero da aeronave: ";
				cin >> pesquisa;
				mostraAvioes(avioes,pesquisa,avioes_tamanho);
				system("read -n1");
		}
		else if ( opcao == 4 ){
				system("clear");
				reservaAssento(avioes,avioes_tamanho);
				system("read -n1");
		}
		else{					
			cout << "Opção inválida." << endl;
		}
	}
	return 0;
}
void mostraMenu(){
	cout << "========== Abutre Companhia Aérea ==========" << endl;
	cout << "Menu de Opções:" << endl;
	cout << "<1> Cadastrar aviões e quantidade de assentos por aeronave" << endl;
	cout << "<2> Consultar vagas em todas as aeronaves" << endl;
	cout << "<3> Consultar vagas por avião" << endl;
	cout << "<4> Reservar vaga em aeronave" << endl;
	cout << "<0> Sair" << endl;
}
void limpaAvioes(Aeronave vetor[],int tamanho_vetor){
	int i, j;
	for ( i = 0; i < tamanho_vetor; i++){
		vetor[i].numero_aeronave = 0;
		vetor[i].qtd_assentos = 0;
		vetor[i].qtd_assentos_disponiveis = 0;
		for ( j = 0; j < 100; j++){
			vetor[i].nm_passageiros[j] = "0";
		}
	}
}
void mostraAvioes(Aeronave vetor[],int nr_pesquisa,int tamanho_vetor){
	int i;
	if ( nr_pesquisa <= 0 ){
		cout << "|Num Aeronave	|Qtd Assentos	|Qtd Assentos Disp	|" << endl;
		for ( i = 0; i < tamanho_vetor; i++){
			if ( vetor[i].numero_aeronave != 0){
				cout << "|" << vetor[i].numero_aeronave << "		|" << vetor[i].qtd_assentos << "		|" << vetor[i].qtd_assentos_disponiveis << "			|" << endl;
			}
		}
	}
	else{
		int indice = -1;
		for ( i = 0; i < tamanho_vetor; i++){
			if (vetor[i].numero_aeronave == nr_pesquisa){
				indice = i;
				break;
			}
		}
		if ( indice >= 0  ){
			cout << "|Num Aeronave	|Qtd Assentos	|Qtd Assentos Disp	|" << endl;	
			cout << "|" << vetor[indice].numero_aeronave << "		|" << vetor[indice].qtd_assentos << "		|" << vetor[indice].qtd_assentos_disponiveis << "			|" << endl;
		} 
		else{
			cout << "Registro não encontrado." << endl;
		}
	}
}
void cadastraAvioes(Aeronave vetor[],int tamanho_vetor){
	int i, indice_vago, nr_aeronave, nr_existente = 0;
	indice_vago = tamanho_vetor;
	for ( i = 0; i < tamanho_vetor; i++ ){
		if ( vetor[i].numero_aeronave == 0){
			indice_vago = i;
			break;
		}
	}
	if ( indice_vago < tamanho_vetor ){
		while(1){
			cout << "Informe o número da aeronave: ";
			cin	>> nr_aeronave;
			for ( i = 0; i < tamanho_vetor; i++ ){
				if ( vetor[i].numero_aeronave == nr_aeronave){
					nr_existente = 1;
					break;
				}
			}
			if (nr_aeronave > 0){
				if ( nr_existente == 0){
					vetor[indice_vago].numero_aeronave = nr_aeronave;
					break;
				}
				else{
					cout << "Número de aeronave já cadastrado." << endl;
					nr_existente = 0;
				}
			}
			else{
				cout << "Valor deve ser maior que zero." << endl;
				nr_existente = 0;
			}
		}
		while(1){
			cout << "Informe o número de assentos: ";
			cin	>> vetor[indice_vago].qtd_assentos;
			if ( vetor[indice_vago].qtd_assentos <= 100 ){
				break;
			}
			else{
				cout << "Máximo de 100 assentos permitidos." << endl;
			}
		}
		vetor[indice_vago].qtd_assentos_disponiveis = vetor[indice_vago].qtd_assentos;
		cout << "Cadastro concluido." << endl;
	}
	else{
		cout << "Limite de cadastro atingido." << endl;
	}
}
void reservaAssento(Aeronave vetor[],int tamanho_vetor){
	int nr_aeronave, indice_aeronave = -1, i, j, in_vago_nm_passageiros;
	cout << "Informe o número da aeronave: ";
	cin >> nr_aeronave;
	for ( i = 0; i < tamanho_vetor; i++){
		if ( vetor[i].numero_aeronave == nr_aeronave ){
			indice_aeronave = i;
		}
	}
	if ( indice_aeronave >= 0 ){
		if ( vetor[indice_aeronave].qtd_assentos_disponiveis > 0 ){
			for ( i = 0; i < 100; i++){
				if ( vetor[indice_aeronave].nm_passageiros[i] == "0" ){
					in_vago_nm_passageiros = i;
					break;
				}
			}
			while(1){
				cout << "Informe o nome do passageiro:";
				cin >> vetor[indice_aeronave].nm_passageiros[in_vago_nm_passageiros];
				if ( vetor[indice_aeronave].nm_passageiros[in_vago_nm_passageiros] != "0" ){
					break;
				}
				else{
					cout << "Nome não pode ser igual a zero." << endl;
				}
			}
			vetor[indice_aeronave].qtd_assentos_disponiveis--;
			cout << "Reserva confirmada" << endl;
		}
		else{
			cout << "Voo lotado." << endl;
		}
	}
	else{
		cout << "Aeronave não encontrada." << endl;
	}
}