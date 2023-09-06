
#include <stdio.h>

int main() {
  
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PISPASEP = 0.0165f;
  const float preco = 100;

  float Preco_final = (1 + ICMS + COFINS + PISPASEP) * preco;
  
  printf ("O Preco_final é %.2f\n", Preco_final);

  return 0;
  
}