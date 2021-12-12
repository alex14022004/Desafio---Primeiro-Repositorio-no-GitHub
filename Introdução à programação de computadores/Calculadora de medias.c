#include <stdio.h>
#include<stdlib.h>

int main ()
{
	float a,b,c,d,e,f;
	
	printf ("Digite sua nota de Introducao a Administracao: ");
	scanf ("%f", &a);
		printf ("Digite sua nota de Empreendedorismo: ");
		scanf ("%f", &b);
			printf ("Digite sua nota de Nocoes de Direito previdenciario: ");
			scanf ("%f", &c);
				printf ("Digite sua nota de Meio Ambiente e Seguranca: ");
				scanf ("%f", &d);
					printf ("Digite sua nota de Etica profissional: ");
					scanf ("%f", &e);
						printf ("Digite sua nota de Projeto Integrador: ");
						scanf ("%f", &f);
					
	printf ("Sus media Eh: %.2f", a*0.2 + b*0.2 + c*0.3 + d*0.1 + e*0.1 + f*0.1);
	system("pause");
	
}
