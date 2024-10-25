#include <stdio.h>

int main(void) {
  
  int L, cont = 0;
  int x = 0, y = 1, z;


  printf("insira quantos elementos da sequência de Fibonacci devem ser mostrados:\n");
  scanf("%d", &L);
  
  while (cont < L)
    {
      z = x + y;
      printf("%d", z);
      cont++; 

      if (cont < L)
      {
        printf(" ");
      }
      else
      {
        printf("\n");
        break; 
      }

      y = z + x;
      printf("%d", y);
      cont++;
      
      if (cont < L)
      {
        printf(" ");
      }
      else
      {
        printf("\n");
        break;
      }

      x = z + y;
      printf("%d", x);
      cont++;

      if (cont < L)
      {
        printf(" ");
      }
      else
      {
        printf("\n");
        break;
      }
    }
  return 0;
}