#include <stdio.h>
#include <stdlib.h>

int* cria(int tam,int valor){

    int* criavetor = (int*)calloc(tam,sizeof(int));
    *criavetor = valor;

    return criavetor;
 
}

int main(){

    int* v1= cria(6,1);
    return 0;
  
    
}
