#include <stdio.h>

int main() {
  int multiplo = 0;

  printf("Entre com um numero de 0 a 100");

  int leu_certo = scanf("%i", &multiplo);

  for(int i = 0; i <= 100; i++) {
    if ((i+1) % multiplo == 0) {
      printf(", %i", i+1);
      }
  }
  printf("\n");
  return 0;
}