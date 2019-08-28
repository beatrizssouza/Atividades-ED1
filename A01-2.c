#include <stdio.h>
#include <math.h>

void extenso(int num,int x[5], int *v){

int i,j;
for(i=0; num; i++)
 {  
  x[i] = num % 10;
  num /= 10;
 }

for( j=0; j<i; j++)
 {
     num += x[j] * pow(10, (i-j-1));    
}

*v = num;
}

int main(){

    int numero = 9865, dig[5],pont;

    extenso(numero,dig,&pont);
    printf("O numero inverso é: %d",&pont);
}
