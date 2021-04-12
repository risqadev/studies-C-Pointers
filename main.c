#include <stdio.h>

int main(void) {

  int x; // Cria uma variável chamada "x" para guardar um valor do tipo inteiro, reservando um espaço na memória.
  x = 3; // A variável "x" recebe o valor inteiro "5"
  int *xPtr; // Cria uma variável chamada "xPtr" que será um ponteiro (*), ou seja, o seu valor guardará um endereço de memória de outra variável do tipo inteiro.
  xPtr = &x; // A variável "xPtr" recebe o endereço (&) da variável "x"

  printf( "\nx = %d (endereço: %p)\n"
          "*xPtr = %d (end. próprio: %p; end. apontado: %p)\n",
          x, &x, *xPtr, &xPtr, xPtr);

  int y = 5; // Cria uma variável chamada "y" para guardar um valor do tipo inteiro, já atribuindo o valor "9" a ela.
  int *yPtr = &y; // Cria uma variável chamada "yPtr" que será um ponteiro (*), já atribuindo ao seu valor (*) o endereço de memória (&) da variável do tipo inteiro "y".

  printf( "\ny = %d (endereço: %p)\n"
          "*yPtr = %d (end. próprio: %p; end. apontado: %p)\n",
          y, &y, *yPtr, &yPtr, yPtr);

  /* SINTETIZANDO:

    xPtr  // valor próprio (que é um endereço de outra variável)
    &xPtr // endereço próprio (é diferente do que é referenciado)
    *xPtr // valor referenciado
  */

  printf("\nREATRIBUIÇÃO DE PONTEIROS:\n");

  // Reatribuição de ponteiros:
  xPtr = yPtr; // Atribuição a um ponteiro do valor de outro ponteiro. Como yPtr é um ponteiro para y, não é necessário o "&", pois isso referenciaria o endereço da variável yPtr e não o de y.
  yPtr = &x; // Atribuição a um ponteiro do endereço de uma variável. Fazendo yPtr receber o endereço da variável x.

  printf( "\nx = %d (endereço: %p)\n"
          "*xPtr = %d (end. próprio: %p; end. apontado: %p)\n",
          x, &x, *xPtr, &xPtr, xPtr);
  
  printf( "\ny = %d (endereço: %p)\n"
          "*yPtr = %d (end. próprio: %p; end. apontado: %p)\n",
          y, &y, *yPtr, &yPtr, yPtr);

  printf("\nALTERAÇÃO DE VALORES:\n");

  x = 7; // Alterando x diretamente (também afetará yPtr que agora está apontando para x)
  *xPtr = 11; // Alterando o valor de y indiretamente, através do valor referenciado de xPtr (aponta para y)

  printf( "\nx = %d (endereço: %p)\n"
          "*xPtr = %d (end. próprio: %p; end. apontado: %p)\n",
          x, &x, *xPtr, &xPtr, xPtr);
  
  printf( "\ny = %d (endereço: %p)\n"
          "*yPtr = %d (end. próprio: %p; end. apontado: %p)\n",
          y, &y, *yPtr, &yPtr, yPtr);


  printf("\nREATRIBUIÇÃO DE PONTEIROS:\n");

  xPtr = yPtr; // ponteiro - ponteiro
  yPtr = &y; // ponteiro - variável

  printf( "\nx = %d (endereço: %p)\n"
          "*xPtr = %d (end. próprio: %p; end. apontado: %p)\n",
          x, &x, *xPtr, &xPtr, xPtr);
  
  printf( "\ny = %d (endereço: %p)\n"
          "*yPtr = %d (end. próprio: %p; end. apontado: %p)\n",
          y, &y, *yPtr, &yPtr, yPtr);




  printf( "\n\nMostrando que '*' e '&' se complementam:\n"
          "&*aPtr = %p\n"
          "*&aPtr = %p\n",
          &*xPtr, *&xPtr );

  // printf("O endereço de x é %p\nO valor de xPtr é %p\n", &x, xPtr);

  return 0;
}