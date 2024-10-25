#include <stdio.h>

int fatorial(int valor)
{
  if (valor == 1 || valor == 0) return 1;
  else if (valor > 1)  return  valor * fatorial(valor - 1);
  else return -1; 
}
double valorT(int denominador)
{
  float T = 1; 
  while (denominador > 0)
    {
      T = T + (1.0 / fatorial(denominador));
      denominador--;
    }
  return T;
}
int main(void) 
{
  int N = 0;
  printf("insira um valor: ");
  scanf("%d", &N);
  printf("T = %.2lf\n", valorT(N));
  return 0;
}