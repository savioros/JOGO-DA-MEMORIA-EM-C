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
  
  printf("BEM-VINDO AO JOGO DA MEMÓRIA\n");
  printf("1 - COMEÇAR O JOGO\n");
  printf("2 - SAIR\n");
  printf("Digite a opção desejada ");
  scanf("%d", &op);
  switch(op){
    case 1:
      system("clear");

      printf("-=JOGO DA MEMÓRIA=-\n");
      printf("SEQUÊNCIA: ");
      srand(time(NULL));
      for(i = 1; i < 6; i++){
          vet[i] = rand() % 10;
          printf("%d ", vet[i]);
      }

      printf("\n");
      printf("\nVOCÊ TERÁ 5s PARA DECORAR A SEQUÊNCIA\n");
      sleep(5);

      system("clear");

      printf("-=INFORME OS NÚMEROS=-\n");
      for(i = 1; i < 6; i++){
        printf("\nNÚMERO %d: ", i);
        scanf("%d", &acertos[i]);
        if(acertos[i] == vet[i]){
          pontos++;
        }
      }

      if(pontos == 5){
        printf("\nVOCÊ ACERTOU 100 POR CENTO DA SEQUÊNCIA!!!");
      }else if(pontos == 4){
        printf("\nVOCÊ ACERTOU 80 POR CENTO DA SEQUÊNCIA!!!");
      }else if(pontos == 3){
        printf("\nVOCÊ ACERTOU 60 POR CENTO DA SEQUÊNCIA!!!");
      }else if(pontos == 2){
        printf("\nVOCÊ ACERTOU 40 POR CENTO DA SEQUÊNCIA!!!");
      }else if(pontos == 1){
        printf("\nVOCÊ ACERTOU 20 POR CENTO DA SEQUÊNCIA!!!");
      }else if(pontos == 0){
        printf("\nVOCÊ NÃO ACERTOU NENHUM NÚMERO!!!");
      }

      printf("\nSEQUÊNCIA CORRETA:");
      for(i = 1; i < 6; i++){
        printf("\t%d", vet[i]);
      }
    break;

    case 2:
      system("clear");
      printf("ATÉ A PRÓXIMA. . .");
    break;
  }

  return 0;
}
