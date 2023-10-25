
#include <stdio.h>
#include <math.h>

int main() {

 double valor_em_giga = 50;

double valor_em_byte = valor_em_giga * pow(1024,3);



printf("o valor em giga %.f em bytes %f\n",valor_em_giga, valor_em_byte);

  return 0;
  
}