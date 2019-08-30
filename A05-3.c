#include <stdio.h>
#include <stdlib.h>


void vetor_incrementa(int *v1,int tam){

	for(int i=0;i<tam;i++){
		v1[i] += 1;
	}

	for(int j=0;j<tam;j++){

		printf("vetor[%d] = %d \n",j,v1[j]);
	}
}
int main(){

	int v1[5] = {10,20,30,40,50};
	vetor_incrementa(v1, 5); 

}