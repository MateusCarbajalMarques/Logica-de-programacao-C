#include<stdio.h>
int main(){
    int n;
    printf("Digite valor de N: ");
    scanf("%d",&n);
    if(n<=10){
        printf("\n\tF1");
    }
    else if(n>10&&n<=100){
        printf("\n\tF2");
    }
    else {
        printf("\n\tF3");
    }

}
