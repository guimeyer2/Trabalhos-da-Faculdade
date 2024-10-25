#include <stdio.h>
void procedimento (int nota){
if (nota<=39){
  printf (" conceito F\n");
}
else if (nota>39 && nota<=59){
  printf (" conceito E\n");
}
else if (nota>59 && nota<=69){
  printf (" conceito D\n");
}  
else if (nota>69 && nota<=79){
  printf (" conceito C\n");
}
else if (nota>79 && nota<=89){
  printf (" conceito B\n");
}
else 
  printf (" conceito A\n");
}


int main(void) {
int nota, t=0;
  printf ("insira o total de alunos:\n");
  scanf ("%d", &t);
  while (t>0){
  printf ("insira a nota do aluno:\n");
  scanf ("%d", &nota);
  procedimento (nota);
  t--;




    
  }
  
  return 0;
}