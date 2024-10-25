#include <stdio.h>

int main(void) {

  int n, fatorial = 1;
  float e = 1;

  printf("Digite um valor positivo e inteiro: ");
  scanf("%d", &n);


  for (int i = n; i >= 1; i--)
    {
      fatorial *= i;
    }
  

  while (n >= 1)
    {
      e = e + (1.0 / fatorial); 
      fatorial = fatorial / n;
      n--;
    }

  printf("E = %f\n", e);
  return 0;
}