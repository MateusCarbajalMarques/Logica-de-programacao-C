#include<stdio.h>
int main(){
    int numero1, numero2;
    printf("Primeiro numero: ");
    scanf("%d",&numero1);
    printf("Segundo numero: ");
    scanf("%d",&numero2);
    if(numero1>numero2){
        printf("Primeiro numero e maior que Segundo: %d", numero1);
    }else if (numero1 == numero2){
        printf("numeros igual");

    }else{
        printf("\n\tSegundo numero e maior que Primeiro: %d",numero2);
    }
}
