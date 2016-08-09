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
int main(){
	int a, b;
	traco();
	printf("\nDigite o primeiro numero: ");
	scanf("%i", &a);
	fflsuh(stdin);
	printf("\nDigite o segundo numero: ");
	scanf("%i", &b);
	fflsuh(stdin);
	somar(a,b);
	return 0;
}