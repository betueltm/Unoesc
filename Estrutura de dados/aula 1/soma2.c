#include <stdio.h>
void traco(){
	printf("================================");
}
int a, b, soma;
int main(){
	traco();
	printf("\nDigite o primeiro numero: ");
	scanf("%i", &a);
	fflsuh(stdin);
	printf("\nDigite o segundo numero: ");
	scanf("%i", &b);
	fflsuh(stdin);
	soma= a+b;
	traco();
	printf("\nA soma de %d = %d\n", a,b,soma);
	traco();
}