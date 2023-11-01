#include <stdio.h>

int main() {

  int numero[10];

  numero[0] = 15;
  numero[1] = 5;
  numero[2] = 3;
  numero[3] = 8;
  numero[4] = 7;
  numero[5] = 10;
  numero[6] = 1;
  numero[7] = 2;
  numero[8] = 6;
  numero[9] = 11;

  for(int i=0; i<10; i++){
    printf("%i,", numero[i]);
   
    
}
   printf("\n");

  return 0;
}