#include <iostream>
using namespace std;

int fatorial(int n);
void uniao(int a[], int b[], int destino[]);
void preencheVetor(int vetor[]);
void mostraVetor(int vetor[]);
int procuraIgual(int valor, int	vetor[],int tamanho_vetor);

int main(){
	int a[10], b[10], uniao[20] = {0}, i;
	preencheVetor(a);
	uniao(a,b,uniao);
	cout << "Mostrando vetor B com os fatorias:" << endl;
	mostraVetor(uniao);
}
int fatorial(int n){
	if ( n == 1 ){
		return 1;
	}
	else{
		return n * fatorial(n - 1);
	}
}
void uniao(int a[],int b[],int destino[]){
	int i, j, temp;
	for ( i = 0; i < 10; i++){
		if ( procuraIgual(a[i], destino,20) == 0 ){
			destino[]
		}
	}
}
int procuraIgual(int valor,int vetor[],int tamanho_vetor){
	int i, encontrado = 0;
	for ( i = 0; i < tamanho_vetor; i++ ){
		if ( vetor[i] == valor ){
			encontrado = 1;
			break;
		}
	}
	return encontrado;
}
int indiceVago(int vetor[],int tamanho_vetor){

}
 void preencheVetor(int vetor[]){
	int i;
	for (i = 0; i < 10; i++){
		cout << "Informe o valor " << i << " do vetor A:";
		cin	>> vetor[i];
	}
}
void mostraVetor(int vetor[]){
	int i;
	for (i = 0; i < 20; i++){
		cout << " " << vetor[i] << " ";
	}
}