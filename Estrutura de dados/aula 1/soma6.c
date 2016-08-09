#include <stdio.h>
void traco(){
	printf("================================");
}
void somar(int a,int b){
	int soma;
	soma= a+b;
	traco();
	printf("\nA soma de %d = %d\n", a,b,soma);
	traco();
}
int pedeNumero(int x){
	int num;
	if (x == 1){
		traco();
		printf("\nDigite o primeiro numero: ");
	}else{
		printf("\nDigite o segundo numero: ");
	}
	scanf("%i", &num);
	fflsuh(stdin);
	return num;
}
int main(){
	int a,b;
	a = pedeNumero(1);
	b = pedeNumero(2);
	somar(a,b);
	return 0;
}