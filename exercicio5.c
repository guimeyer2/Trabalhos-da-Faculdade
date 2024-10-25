#include <stdio.h>

int main(void) {
int main(void) 
{
  
  int n_filhos = 0, i = 1;
  double salario = 1, m_salario = 0, m_filhos = 0, maiorsalario = 0, salario100 = 0;

  
  while (salario >= 0) 
  {
   
    printf("Habitante %d:\n", i);
    printf("Digite o salário:\nR$");
    scanf("%lf", &salario);

    if (salario >= 0)
    {
     
      printf("Digite o número de filhos: ");
      scanf("%d", &n_filhos);
      printf("\n");
     
      m_salario = m_salario + salario; 
      
      
      if (salario <= 100)
      {
        salario100++;
      }
      
     
      m_filhos = m_filhos + n_filhos;
    }
    else 
    {
      printf("\n");
      m_salario = m_salario; 
    }
    
   
    if (salario > maiorsalario)
    {
      maiorsalario = salario;
    }
      
    i++; 
  }

  /
  m_salario = m_salario / (i - 2); 

  
  m_filhos = m_filhos / (i - 2);

 
  salario100 *= 100 / (i - 2);

  
  printf("A média de salários da população é de R$%.2lf\n", m_salario);
  printf("A média do número de filhos da população é de %.2lf\n", m_filhos);
  printf("O maior salário entre a população é de R$%.2lf\n", maiorsalario);
  printf("O percentual de pessoas com salário até 100 reais entre a população é de %.2lf%%\n", salario100);
  
  return 0;
}