#include <stdio.h>

void pontecia(int a,int b,int *res)
{
    int cont = 1;
    int x = a;

    for(int i=0; i < b;i++){
        
        cont *= x;

    }
    
    *res = cont;
}
int main(){

    int base = 2, pont = 4, resul = 0;
    pontecia(base,pont, &resul);
    printf("A pontencia é %d", resul);
}
