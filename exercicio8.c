#include <stdio.h>

int main(void) {
 int L;
  int x = 0, y = 1, z = 0;


  printf("Digite o valor de L: ");
  scanf("%d", &L);


  while (z < L) 
  {
    z = x + y;
    if (x + y < L) 
    {
      printf("%d", z);
      printf(" ");
    } 
    else 
    {
      printf("\b");
      break;
    }

    y = z + x;
    if (z + x < L) 
    {
      printf("%d", y);
      printf(" ");
    } 
    else 
    {
      printf("\b");
      break;
    }

    x = z + y;
    if (z + y < L) 
    {
      printf("%d", x);
      printf(" ");
    } 
    else 
    {
      printf("\b");
      break;
    }
  }
    printf("\n");
  return 0;
}