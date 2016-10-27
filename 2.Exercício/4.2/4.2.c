#include<stdio.h>
int main(){
	float valor,pagamento,desconto,juros,total;
	int quantidade,opcao;
	char nomeProduto[10];
	
	printf("Nome do Produto: ");
	scanf("%s",&nomeProduto);
	printf("\nQuantidade: ");
	scanf("%d",&quantidade);
	printf("\nvalor do Pagamento: ");
	scanf("%f",&valor);
	printf("\n");
	printf("\nForma de pagamento");
	printf("\n_____________________");
	printf("\n1 - A vista tera 10 porcento de Desconto");
	printf("\n2 - cartao tera 5 porcento  de juros");
	printf("\nescolha a opcao: ");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
		desconto = (valor*quantidade)*0.1;
		total = (valor*quantidade) - desconto;
		printf("\nProduto: %s ",nomeProduto);
		printf("\nTotal a paga com desconto R$: %.2f ",total);
		break;
		case 2:
		printf("\nProduto: %s ",nomeProduto);
		juros = (valor*quantidade)*0.05;
		total = (valor*quantidade) * juros;
		printf("\nTotal a paga com juros R$: %.2f ",total);
		
		break;
		
		default: 
		printf("\nNenhuma escolha foi feita");	
		
	}
		
	
	
	
}
