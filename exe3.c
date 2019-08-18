#include <stdio.h>

void nota(float nota2, char *res){

    if(nota2 >= 10.0 && nota2 <=9){
        *res = 'A';
    }else if(nota2  >= 7 && nota2 < 9){
        *res = 'B';
    }else if (nota2 >= 6 && nota2 < 7)
    {
        *res = 'C';
    }else if (nota2 >= 0 && nota2 < 6)
    {
        *res= 'I';
    }
    
    

}
int main(){

    float nota1 = 7.8;
    char conceito;

    nota(nota1,&conceito);
    printf("O conceito é %c",conceito);

}