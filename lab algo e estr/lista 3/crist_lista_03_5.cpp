#include <iostream>
using namespace std;

int somaElementosMatriz(int matriz[5][5]);
void preencheMatriz(int matriz[5][5]);

int main(){
	int a[5][5];
	preencheMatriz(a);
	cout << "Soma dos elementos da matriz A: " << somaElementosMatriz(a) << endl;
}
int somaElementosMatriz(int matriz[5][5]){
	int i, j, soma = 0;
	for ( i = 0; i < 5; i++ ){
		for ( j = 0; j < 5; j++ ){
			soma += matriz[i][j];
		}
	}
	return soma;
}
void preencheMatriz(int matriz[5][5]){
	int i, j;
	for (i = 0; i < 5; i++){
		for ( j = 0; j < 5; j++ ){
			cout << "Informe o valor " << i << " " << j << " da matriz a:";
			cin	>> matriz[i][j];
		}
	}
}