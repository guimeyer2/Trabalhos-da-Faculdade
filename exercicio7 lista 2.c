#include <stdio.h>

#include <stdbool.h>
bool procedimento (float N){
if (N>0)
  return true;

else if (N<0)
return false;
else return -1;}

int main(void) {
float num=0,  t=0;
  printf ("insira o total de numeros: \n");
  scanf ("%f", &t);
    while (t>0){
    printf ("insira um numero:\n");
    scanf ("%f", &num);
    if (procedimento(num) == true) printf("Positivo\n");
      else if (procedimento(num) == false) printf("Negativo\n");
      else printf("Nulo\n");
    t--;
    }
  return 0;
}