#include<stdio.h>

int main(void){
	
	int a, b, i;
    int c = 1;
	
	printf("Digite um numero natural maior que 0 e menor que 32: ");
	scanf("%d", &a);
	
	int vet[a];
	
	b = a;
	
	for (i=0;i<a;i++)
	{
		vet[i] = b;
		b--;
		c = c * vet[i];
	};
	
	printf("\n O fatorial de %d eh %d ", a, c);
	return 0;
}
