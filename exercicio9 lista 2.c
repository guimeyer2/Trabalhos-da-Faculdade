#include <stdio.h>

double media(int total)
{
  
  int aluno = 0, acimadamedia = 0;
  float nota = 0, totalnotas = 0;

    while (total > 0) 
    {
      printf("Digite a nota do aluno %d: ", aluno + 1);
      scanf("%f", &nota);
      if (nota >= 6) 
      {
        totalnotas += nota;
        acimadamedia++;
      }
      aluno++;
      total--;
    }

  return totalnotas / acimadamedia;
}


int main(void) 
{

  int totalalunos = 0;

 
  printf("Digite o número de alunos: ");
  scanf("%d", &totalalunos);

 
  printf("Média: %.2lf\n", media(totalalunos));
  
  return 0;
}