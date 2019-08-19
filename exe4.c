#include <stdio.h>
#include <string.h>

void extenso(int dia, int mes, char*d,char*m){


    int op= mes;
    while (op == 0 || op > 12)
    {
        switch(op){

            case 1: strcpy(*m,"Janeiro");
                    break; 
            case 2: strcpy(*m,"Fevereiro");
                    break; 
            case 3: strcpy(*m,"Março");
                    break;
            case 4: strcpy(*m,"Abril");
                    break; 
            case 5: strcpy(*m,"Maio");
                    break;  
            case 6: strcpy(*m,"Junho");
                    break; 
            case 7: strcpy(*m,"Julho");
                    break; 
            case 8: strcpy(*m,"Agosto");
                    break; 
            case 9: strcpy(*m,"Setembro");
                    break; 
            case 10: strcpy(*m,"Outubro");
                    break; 
            case 11: strcpy(*m,"Novembro");
                    break; 
            case 12: strcpy(*m,"Dezembro");
                    break; 
        }
    }

    int op1= dia;
    while (op1 == 0 || op1 > 31)
    {
        switch (op1){

            case 1: strcpy(*d,"Um");
                    break;
            case 2: strcpy(*d,"Dois");
                    break;
            case 3: strcpy(*d,"Tres");
                    break;
            case 4: strcpy(*d,"Quatro");
                    break;
            case 5: strcpy(*d,"Cinco");
                    break;  
            case 6: strcpy(*d,"Seis");
                    break;
            case 7: strcpy(*d,"Sete");
                    break;                  
            case 8: strcpy(*d,"Oito");
                    break;
            case 9: strcpy(*d,"Nove");
                    break;
            case 10: strcpy(*d,"Dez");
                    break;
            case 11: strcpy(*d,"Onze");
                    break;
            case 12: strcpy(*d,"Doze");
                    break;  
            case 13: strcpy(*d,"Treze");
                    break;  
            case 14: strcpy(*d,"Quatorze");
                    break;           
            case 15: strcpy(*d,"Quinze");
                    break; 
            case 16: strcpy(*d,"Dezesseis");
                    break;
            case 17: strcpy(*d,"Dezessete");
                    break;
            case 18: strcpy(*d,"Dezoito");
                    break;
            case 19: strcpy(*d,"Dezenove");
                    break;
            case 20: strcpy(*d,"Vinte");
                    break;
            case 21: strcpy(*d,"Vinte e Um");
                    break;
            case 22: strcpy(*d,"Vinte e Dois");
                    break;
            case 23: strcpy(*d,"Vinte e Tres");
                    break;
            case 24: strcpy(*d,"Vinte e Quatro");
                    break; 
            case 25: strcpy(*d,"Vinte e Cinco");
                    break;
            case 26: strcpy(*d,"Vinte e Seis");
                    break;
            case 27: strcpy(*d,"Vinte e Sete");
                    break;
            case 28: strcpy(*d,"Vinte e Oito");
                    break; 
            case 29: strcpy(*d,"Vinte e Nove");
                    break;
            case 30: strcpy(*d,"Trinta");
                    break;
            case 31: strcpy(*d,"Trinta e Um");
                    break;

        }
    }
    
    


}

int main(){
    char dia1[20],mes1[20];
    int dia2 = 25, mes2= 9, ano = 2001;

    extenso(dia2,mes2,&dia1,&mes1);
    printf("%d/%d/%d : %s de %s de %d",dia2,mes2,ano,&dia1,&mes1,ano);


}

