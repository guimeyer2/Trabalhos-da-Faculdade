#include <stdio.h>

int main(void) {


  int n, i = 0, j;
  float soma = 1;

  printf("Digite um valor inteiro e positivo: ");
  scanf("%d", &n);


  i = n + 1;

  while (n > 1)
    {
      soma = soma + (1.0 / n);
      n--;
    }
  

  printf("S = 1");
  n++;
  while (i > n)
    {
      printf(" + 1/%d", n);
      n++;
    }
  printf("\n");
  printf("S = %.2f\n", soma);
  return 0;
}