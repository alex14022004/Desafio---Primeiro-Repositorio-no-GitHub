#include <stdio.h>
#include <locale.h>

main(){

    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int i, tamanho_vetor;
    
    	void OrdemCrescente (int vetor[], int tamanho_vetor); //mudei a variável 'char vetor' para 'int vetor'

    printf("Digite uma sequência de 10 números e o colocaremos em ordem crescente:\n");
    scanf("%d", &vetor[0]);
    scanf("%d", &vetor[1]);
    scanf("%d", &vetor[2]);
    scanf("%d", &vetor[3]);
    scanf("%d", &vetor[4]);
    scanf("%d", &vetor[5]);
    scanf("%d", &vetor[6]);
    scanf("%d", &vetor[7]);
    scanf("%d", &vetor[8]);
    scanf("%d", &vetor[9]);

    tamanho_vetor=sizeof(vetor)/sizeof(int); //e utilizei esse método para contar o número de caracteres

    printf("\n%d\n\n", tamanho_vetor);
   		 OrdemCrescente (vetor, tamanho_vetor);

    puts("\nOrdem crescente: ");

    for(i=0; i<10; i++){
        printf("%d ", vetor[i]);
    }
}


		void OrdemCrescente (int vetor[], int tamanho_vetor){

    int i, f, temporaria;

    for(i=0; i<tamanho_vetor; i++){
        for(f=i+1; f<tamanho_vetor; f++){
            if(vetor[i] > vetor[f]){
                temporaria = vetor[i];
                vetor[i] = vetor[f];
                vetor[f] = temporaria;
            }
        }
    }
}
