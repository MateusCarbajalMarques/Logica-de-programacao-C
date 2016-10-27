#include<stdio.h>
int main(){
	float base,altura,area;
	printf("\n\tDigite o valor de base do triangulo: ");
	scanf("%f",&base);
	printf("\n\tDigite o valor da altura do triangulo: ");
	scanf("%f",&altura);
	
	area = (base*altura)/2;
	
	printf("\n\ta area do triangulo e: %.2f ",area);
	 
}
