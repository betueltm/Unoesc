#include <stdio.h>
int a, b;
void traco(){
	printf("================================");
}
void somar(){
	int soma;
	soma= a+b;
	traco();
	printf("\nA soma de %d = %d\n", a,b,soma);
	traco();
}
int main(){
	traco();
	printf("\nDigite o primeiro numero: ");
	scanf("%i", &a);
	fflsuh(stdin);
	printf("\nDigite o segundo numero: ");
	scanf("%i", &b);
	fflsuh(stdin);
	somar();
	return 0;
}