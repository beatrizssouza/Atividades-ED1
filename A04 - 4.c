#include <stdio.h>
#include <stdlib.h>

int* intercala_a(int *v1,int tam,int *v2, int tam2){

     int j=0;k=0;
     int *v3;
    
    for(int i=0;i<(tam+tam2);i++){

        if(i%2 == 0){
            v3[i] = v1[j];
            j++;
        }else{
            v3[i] = v2[k];
            k++;
        }
        printf("%d",v3[i]);
        
    }
    return v3;
}

int main(){

    int v1[3]={1,3,5};
    int v2[4]= {2,4,6,8};
    int v3[7];
    int *v4;

    v4 = intercala_a(v1,3,v2,4);
    
}