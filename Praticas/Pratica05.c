
#include <stdio.h>

int main() {

  const float Giga = 1;
  const float Byte = 1024*1024*1024;
  int Valor_inicial = 50;

  int giga_byte = (Giga * Byte)*Valor_inicial;

  printf("A quantidade de byte é %.2i\n", giga_byte);

  return 0;
  
}