#include <stdio.h>
#include <stdlib.h>
int main(){

  char opcao = 0;

  while(opcao != '0'){
    int ok = system("clear");
    printf("Menu Principal\n");
    printf("1- Consultar saldo\n");
    printf("2- Fazer recarga\n");
    printf("3- Listar recados\n");
    printf("0- Sair\n");
    printf("Escolha sua opcao =>");
    int leu_certo = scanf( " %c", &opcao);
    getchar();
    switch(opcao){
      case '1':printf("Saldo é de R$ 10,00\n"); break;
      case '2' :printf("Escolha o valor da recarga\n"); break;
      case '3' :printf("Nao tem recado\n"); break;
      case '0': break;
      default: printf("Opcao invalida\n"); break;
    }
    printf("Precione Enter\n");
    getchar();
    
    
  }
  return 0;
}