//Escreva um programa que crie uma Estrutura Node com dois campos (x, y) do tipo inteiro. Realize a leitura e exibi ̧c ̃ao dos dados dessa Estrutura utilizando um ponteiro para essa estrutura.(typedef)



#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int X;
  int Y;

}node;


int main(void) {

  node *P_struct;

  P_struct = malloc(sizeof(node));



  P_struct->X = 142;
  P_struct->Y = 115;


  printf ("\nCampo X: %d // Campo Y: %d\n", P_struct->X, P_struct->Y);

  

  

  
  return 0;
}

