#include<stdio.h>
#include<stdlib.h>
int main (){
	float media, prova1,prova2,prova3;
	printf("\n\tEntre com a primeira nota da prova: ");
	scanf("%f",&prova1);
	printf("\n\tEntre com a seginga nota da prova: ");
	scanf("%f",&prova2);
	printf("\n\tEntre com terceira nota da prova: ");
	scanf("%f",&prova3);
	media = ((prova1*2)+(prova2*3)+(prova3*5))/10;
	printf("\n\tNota final do aluno e: %.2f",media);
	return 0;	
}
