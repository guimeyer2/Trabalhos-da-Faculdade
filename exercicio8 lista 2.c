#include <stdio.h>
#include <math.h>
float primeironum (int n1)
{
  return powf(n1, 2) + 1;
}


float segundonum (int n2)
{
  return n2 + 3;
}


double procedimento(int valor)
{

  double S = 0;
  float parcela1 = 0, parcela2 = 0;

  
  while (valor > 0)
    {
      parcela1 = primeironum (valor);
      parcela2 = segundonum (valor);

     
      S = S + (parcela1 / parcela2);
      valor--;
    }
  return S;
}

int main(void) 
{

  int N = 0;

 
  printf("insira um número:\n ");
  scanf("%d", &N);

 
  printf("S = %.2lf\n", procedimento(N));
  
  return 0;
}