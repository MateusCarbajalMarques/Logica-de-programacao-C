#include <stdio.h>

int main() {
  int idade;

  printf("Informe a idade a:\n");
  scanf("%d", &idade);

  printf("\n%d = ", idade);

  if (idade < 0)
     printf("Erro: idade invalida !!!.");
  else if ((idade >= 0) && (idade <= 2))
          printf("Bebe");
       else if ((idade >= 3) && (idade <= 10))
               printf("Crianca");
            else if ((idade >= 11) && (idade <= 17))
                    printf("Adolescente");
                 else if ((idade >= 20) && (idade <= 55))
                         printf("Adulto");
		      
}
