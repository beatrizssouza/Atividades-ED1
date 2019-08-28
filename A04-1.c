#include <stdio.h>
#define N 5
void vetor(int * v,int tam){


    for(int i=0;i<tam;i++){
        v[i]=i+1;
    }
    
}

int main(){
    int v1[5];
    vetor(v1,6);
    printf("[");
    for (int i=0;i<N; i++){
        printf(" %d ",v1[i]);
        
    }
    printf("]");
}