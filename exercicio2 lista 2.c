#include <stdio.h>
void Msalario (float salario, int filhos, int total)
{
float mediaS;{
mediaS = salario / (total + filhos);
}
printf ("a media é:%.2f ",mediaS);
}

int main(void) {
int n, filhos, total; 
float salario, media;
printf ("qual o total de pessoas na pesquisa:\n ");
  scanf ("%d", &total);

for (int i = 1; i<=total ; i++)
{
printf ("insira o salario da pessoa:\n ",i);
  scanf ("%f", &salario);
printf ("quantos filhos a pessoa tem: \n");
  scanf ("%d", &filhos);
  if (i=total)
    (Msalario (salario, filhos, total));
else printf ("insira o salario da pessoa:\n ");
  scanf ("%f", &salario);
printf ("quantos filhos vc tem: \n");
  scanf ("%d", &filhos);

}




  
  return 0;
}