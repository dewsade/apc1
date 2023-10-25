#include <stdio.h>

int main() {

  int numero = 0;
  
  printf("Entre com um numero > 0:");

int leu_certo = scanf("%i", &numero);

  long int fatorial = 1;
  for(int i = numero; i>1; i--) {
    fatorial = fatorial * i;
  }
  printf("O fatorial de %i eh %li\n", numero, fatorial);

  return 0;
}