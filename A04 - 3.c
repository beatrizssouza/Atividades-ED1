#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void maior(int vetor[],int * maiorInd){

    *maiorInd = vetor[0];

    for(int i=0;i< TAM;i++){
        if(vetor[1] > *maiorInd){
            *maiorInd = vetor[i];
        }
    }
}

int main(){

    int *vetor = NULL;
    int maiorInd;

    vetor = (int *) malloc (TAM* sizeof(int));

    printf("Elementos de um vetor: \n");

    for(int i=0;i < TAM;i++){
        vetor[i] = i+29;
        printf("\n");
    

    for(int i=0;i < TAM; i++){
            printf("Vetor %d = %d \n",i, vetor[i]);
            free(vetor);
    }
}
    maior(vetor,&maiorInd);
    printf("\n Maior elemento é: ",&maiorInd);
}

