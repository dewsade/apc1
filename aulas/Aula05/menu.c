#include <stdio.h>
#include <stdlib.h>
int main(){

  char opcao = 0;
  float saldo = 0.0f;
float recarga = 0.0f;
  while(opcao != '0'){
    int ok = system("clear");
    printf("Menu Principal\n");
    printf("1- Consultar saldo\n");
    printf("2- Fazer recarga\n");
    printf("3- Listar recados\n");
    printf("0- Sair\n");
    printf("Escolha sua opcao =>");
    int leu_certo = scanf( " %c", &opcao);
    while(getchar() != '\n');
    
    switch(opcao){
      case '1':
        ok = system("clean");
      printf("Saldo é R$%4.2f\n", saldo);
      printf("Precione ENTER para retornar");
      while(getchar() != '\n');
      break;
    
      case '2': {
        char recarga = 0;
        while(recarga != '\n'){
     ok = system("clean");
      printf("Fazer recarga\n");
        printf("1 - R$10,00\n");
        printf("2 - R$20,00\n");
        printf("5 - R$50,00\n");

          printf("Escolha o valor da recarga ou \npreciona ENTER para retornar =>");
          ok = scanf("%c", &recarga);
          while(getchar() != '\n');

          switch(recarga){
            case '1':
            saldo = saldo + 10.0f;
            printf("Recarga realizada com sucesso!\n");
            printf("precione ENTER para retornar\n");
            while(getchar() != '\n');
            break;
           
          
            case '2':
            saldo = saldo + 20.0f;
            printf("Recarga realizada com sucesso!\n");
            printf("precione ENTER para retornar\n");
            while(getchar() != '\n');
            break;
           

            case '5':
            saldo = saldo + 50.0f;
            printf("Recarga realizada com sucesso!\n");
            printf("precione ENTER para retornar\n");
            while(getchar() != '\n');
            break;
            default:
            printf("Opcao invalida!\n");
            printf("Precione ENTER para retornar\n");

          
          
        }
  }
  }
  } 
  }
  case '3'
  return 0;
          }