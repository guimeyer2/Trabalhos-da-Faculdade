#include <stdio.h>

int main(void) {
{

  int div3e9 = 0, div5 = 0, div2 = 0, naodiv = 0, t = 0;
  float num = 0;
  
  
  printf("Digite 10 números:\n");
  while (t < 10)
    {
      scanf("%f", &num);
      if ((int)num % 90 == 0) 
      {
        div2++;
        div3e9++;
        div5++;
      }
      else if ((int)num % 9 == 0 && (int)num % 5 == 0) 
      {
        div3e9++;
        div5++;
      }
      else if ((int)num % 9 == 0 && (int)num % 2 == 0) 
      {
        div3e9++;
        div2++;
      }
      else if ((int)num % 5 == 0 && (int)num % 2 == 0) 
      {
        div2++;
        div5++;
      }
      else if ((int)num % 9 == 0) 
      {
        div3e9++;
      }
      else if ((int)num % 2 == 0)
      {
        div2++;
      }
      else if ((int)num % 5 == 0)
      {
        div5++;
      }
      else
      {
        printf("Número não é divisível pelos valores\n");
        naodiv++;
      }
      t++; 
    }

  
  printf("%d Números são divisíveis por 3 e por 9\n"
  "%d Números são divisíveis por 2\n"
  "%d Números são divisíveis por 5\n", div3e9, div2, div5);
  
  return 0;
}