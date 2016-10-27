#include<stdio.h>
#include<stdlib.h>
int main(){
	int numero1,numero2,soma,multiplicacao,adicao,op;
	printf("Entre com numero A: ");
	scanf("%d",&numero1);
	printf("Entre com numero B: ");
	scanf("%d",&numero2);
	
	printf("\n___________________");
	printf("\nESCOLHA UMA OPCAO");
	printf("\n___________________");
	printf("\n1- Caso 1,2,3");
	printf("\n(A+B)");
	printf("\n");
	printf("\n2- Caso 4 ate 8");
	printf("\n(A-B)");
	printf("\n");
	printf("\n3-Outro numero");
	printf("\n(A*B)");
	printf("\n");
	printf("\nDigite opcao: ");
	scanf("%d",&op);
	switch(op){
		case 1:
			soma = numero1 + numero2;
			printf("(A+B) e: %d ",soma);
			break;
		case 2:
			adicao = numero1 - numero2;
			printf("(A-B) e: %d ",adicao);
			break;
		case 3:
			multiplicacao = numero1+numero2;
			printf("(A*B) e: %d ",multiplicacao);
			break;
			
			
	}
	

}
