#include <stdio.h>

int main() {

  
  int numero = 0;
  getchar();
  printf("Entre com um numero de 1 e 10:");
  int leu_certo = scanf("%i", &numero);

  while(numero < 1 || numero > 10) {
    getchar();
printf("Entre com um numero de 1 e 10:");
    int leu_certo = scanf(" %i", &numero);
  }
  printf("A tabuada de %i\n", numero);
int i = 1;
while (i <= 10) {
  printf(" %i x %i = %i\n", numero, i, numero * i);
  i++;
  
}
return 0;
}