#include<stdio.h>
int main(){
	int op;
	float calculo,altura;
	printf("\nDigite a altura: ");
	scanf("%f",&altura);
	printf("\n1-HOMEM");
	printf("\n2-MULHER");
	printf("\n");
	printf("\nEscolha opcao do  Sexo: ");
	scanf("%d",&op);
	switch(op){
		case 1:
		calculo = (72,7*altura)-58;
		printf("Calculo: %f",calculo);
		break;
		case 2:
		calculo = (62,1*altura)-44.7;
		printf("Calculo: %f",calculo);
		break;
		
		default: 
		printf("\nNenhuma escolha foi feita");	
	}
	
	
}
