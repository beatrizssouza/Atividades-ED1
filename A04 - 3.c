#include <stdio.h>
#include <stdlib.h>
#define TAM 2

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
    int maiorI;

    vetor = (int *) malloc (TAM* sizeof(int));

    printf("Elementos de um vetor: \n");

    for(int i=0;i < TAM;i++){
        vetor[i] = i+2;
        printf("\n");
    

    for(int i=0;i < TAM; i++){

            printf("Vetor %d = %d \n",i, vetor[i]);
            free(vetor);

            maior(vetor,&maiorI);
            printf("\n Maior elemento é o vetor [%d] : %d \n",i,maiorI);

    }
}
    
}
