#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	float n1, n2, n3, n4, n5, n6, ab;
	int a, b, c, d, e, o;
	
	n1=3.5;
	n2=2.5;
	n3=2;
	n4=4.5;
	n5=1.5;

	setlocale (LC_ALL, "portuguese");
		
	printf("Seja bem vindo a GRAN SAPORE, A MELHOR LOJA DE DOCES DA REGI�O \n\n");
	printf ("Quantas Esfihas Doces voc� comprou? ");
	scanf ("%d", &a);
	
	printf ("Quantos Bombons de Morango voc� comprou? ");
	scanf ("%d", &b);
	
	printf ("Quantos Tortiletes voc� comprou? ");
	scanf ("%d", &c);
	
	printf ("Quantos Brownies voc� comprou? ");
	scanf ("%d", &d);
	
	printf ("Quantos Donuts voc� comprou? ");
	scanf ("%d", &e);
	
	n6 = (a * n1)+(b * n2)+(c * n3)+(d * n4)+(e * n5);
	o = a+b+c+d+e;
	
	printf ("\nVoc� deve pagar R$ %.2f \n*Page no Caixa \n", n6);
	printf ("Quantidade de itens: %d\n", o);
	printf ("Quanto dinheiro voce quer dar? ");
	scanf ("%f", &ab);
	
	if(n6!=0)
	
{
	
	if (ab>=n6)
	printf ("\nSeu troco � R$ %.2f\n\n", ab-n6);
	
	else 
	printf("\nFaltam R$ %.2f \n\n", n6-ab);
	
}

	else 
	printf("\nVoc� n�o comprou nada. Que pena !!!!!!!\n\n");
	
system ("pause");

return 0;
	
	
	
	
} 
