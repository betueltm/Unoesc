#include <iostream>
using namespace std;

int somaElementosMatriz(int matriz[6][6]);
void preencheMatriz(int matriz[6][6]);

int main(){
	int a[6][6];
	preencheMatriz(a);
	cout << "Soma dos elementos da matriz A: " << somaElementosMatriz(a) << endl;
}
int somaElementosMatriz(int matriz[6][6]){
	int i, j, soma = 0;
	for ( i = 0; i < 6; i++ ){
		for ( j = 0; j < 6; j++ ){
			if ( i == j ){
				soma += matriz[i][j];
			}
			if ( i == (j - 5) ){

			}
		}
	}
	return soma;
}
void preencheMatriz(int matriz[6][6]){
	int i, j;
	for (i = 0; i < 6; i++){
		for ( j = 0; j < 6; j++ ){
			cout << "Informe o valor " << i << " " << j << " da matriz a:";
			cin	>> matriz[i][j];
		}
	}
}