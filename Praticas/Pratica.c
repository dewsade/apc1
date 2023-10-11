#include <stdio.h>

int main() {
float valor_bruto = 0.0f;
float valor_desconto = 0.0f;

  printf ("Entre com o valor bruto:");
  scanf("%f", &valor_bruto);

  if (valor_bruto <= 100.0f) {
  valor_desconto = valor_bruto * 0.01f;
  }

  if (valor_bruto > 100.0f && valor_bruto <= 500.0f) {
  valor_desconto = valor_bruto * 0.05f;
  }

    if (valor_bruto > 500.0f) {
      valor_desconto = valor_bruto * 0.1f;
  }
    printf("valor_bruto: %.2f\n", valor_bruto);
    printf("Valor desconto: %.2f\n", valor_desconto);

    return 0;
  }
