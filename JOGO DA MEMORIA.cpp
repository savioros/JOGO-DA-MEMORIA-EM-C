#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "Portuguese");
  
  int vet[5];
  int acertos[5];
  int op;
  int c = 1, i, pontos;
  
  printf("BEM-VINDO AO JOGO DA MEM�RIA\n");
  printf("1 - COME�AR O JOGO\n");
  printf("2 - SAIR\n");
  printf("Digite a op��o desejada ");
  scanf("%d", &op);
  switch(op){
    case 1:
      system("clear");

      printf("-=JOGO DA MEM�RIA=-\n");
      printf("SEQU�NCIA: ");
      srand(time(NULL));
      for(i = 1; i < 6; i++){
          vet[i] = rand() % 10;
          printf("%d ", vet[i]);
      }

      printf("\n");
      printf("\nVOC� TER� 5s PARA DECORAR A SEQU�NCIA\n");
      sleep(5);

      system("clear");

      printf("-=INFORME OS N�MEROS=-\n");
      for(i = 1; i < 6; i++){
        printf("\nN�MERO %d: ", i);
        scanf("%d", &acertos[i]);
        if(acertos[i] == vet[i]){
          pontos++;
        }
      }

      if(pontos == 5){
        printf("\nVOC� ACERTOU 100 POR CENTO DA SEQU�NCIA!!!");
      }else if(pontos == 4){
        printf("\nVOC� ACERTOU 80 POR CENTO DA SEQU�NCIA!!!");
      }else if(pontos == 3){
        printf("\nVOC� ACERTOU 60 POR CENTO DA SEQU�NCIA!!!");
      }else if(pontos == 2){
        printf("\nVOC� ACERTOU 40 POR CENTO DA SEQU�NCIA!!!");
      }else if(pontos == 1){
        printf("\nVOC� ACERTOU 20 POR CENTO DA SEQU�NCIA!!!");
      }else if(pontos == 0){
        printf("\nVOC� N�O ACERTOU NENHUM N�MERO!!!");
      }

      printf("\nSEQU�NCIA CORRETA:");
      for(i = 1; i < 6; i++){
        printf("\t%d", vet[i]);
      }
    break;

    case 2:
      system("clear");
      printf("AT� A PR�XIMA. . .");
    break;
  }

  return 0;
}
