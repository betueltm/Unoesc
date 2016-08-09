#include <iostream>
using namespace std;

int fatorial(int n);
void preencheFatorial(int a[], int b[]);
void preencheVetor(int vetor[]);
void mostraVetor(int vetor[]);

int main(){
	int a[10], b[10], i;
	preencheVetor(a);
	preencheFatorial(a,b);
	cout << "Mostrando vetor B com os fatorias:" << endl;
	mostraVetor(b);
}
int fatorial(int n){
	if ( n == 1 ){
		return 1;
	}
	else{
		return n * fatorial(n - 1);
	}
}
void preencheFatorial(int a[],int b[]){
	int i;
	for ( i = 0; i < 10; i++){
		b[i] = fatorial(a[i]);
	}
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
	for (i = 0; i < 10; i++){
		cout << " " << vetor[i] << " ";
	}
}