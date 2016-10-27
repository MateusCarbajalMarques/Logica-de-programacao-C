#include<stdio.h>
int main(){
	int picole1,picole2,picole3;
	float soma;
	printf("Quando picole vendido de 0.50?: ");
	scanf("%d",&picole1);
	printf("Quando picole vendido de 0.60?: ");
	scanf("%d",&picole2);
	printf("Quando picole vendido de 0.75?: ");
	scanf("%d",&picole3);
	
	printf("\n\tquantidade vendida de 0.50: %d",picole1);
	printf("\n\tquantidade vendida de 0.60: %d",picole2);
	printf("\n\tquantidade vendida de 0.75: %d",picole3);
	
	soma = picole1+picole2+picole3;
	
	printf("\n\tValor arrecadado R$: %.2f ",soma);
	
	
	
}
