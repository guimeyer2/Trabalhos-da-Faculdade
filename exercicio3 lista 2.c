#include <stdio.h>


void procedimento (int n1, int n2, int n3)
{
  if (n1 > n2 && n1 > n3) 
  {
    if (n2 > n3) 
    {
      printf("%d %d %d\n", n3, n2, n1);
    }
    else 
    {
      printf("%d %d %d\n", n2, n3, n1);
    }
  }
  else if (n2 > n1 && n2 > n3) 
  {
    if (n1 > n3) 
    {
      printf("%d %d %d\n", n3, n1, n2);
    }
    else 
    {
      printf("%d %d %d\n", n1, n3, n2);
    }
  }
  else 
  {
    if (n1 > n2) 
    {
      printf("%d %d %d\n", n2, n1, n3);
    }
    else 
    {
      printf("%d %d %d\n", n1, n2, n3);
    }
  }
}
int main(void) {
int n1, n2, n3 , conjuntos =0;
  printf ("insira quantos conjuntos de números são desejados: \n");
  scanf("%d", &conjuntos);
  
   while (conjuntos > 0)
    {
      printf("insira os 3 valores:\n");
      scanf("%d %d %d", &n1, &n2, &n3);
      procedimento (n1, n2, n3);
      if (conjuntos <= 1) break;
conjuntos--;
    }










  
  return 0;
}