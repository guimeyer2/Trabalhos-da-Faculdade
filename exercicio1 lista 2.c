#include <stdio.h>
void mediaaluno (float n1,float n2, float n3, char escolha){
float media;
  if (escolha == 'A'){
media = (n1+n2+n3)/3; }
  else if (escolha == 'P'){
    media = ((5*n1)+(3*n2)+(2*n3)) / (5+3+2);
  }
printf ("a nota é: %.2f\n", media);
}
int main(void) {
  int n ;
  float p1,p2,p3;
  char escolha;
  printf ("numero de alunos: ");
  scanf ("%d" ,&n);
  for (int i = 1; i<=n; i++)
    {printf ("insira as notas do aluno %d: ", i);
    scanf ("%f %f %f", &p1 , &p2, &p3);
     printf ("insira a ou p: %c", escolha);
     scanf ("%c", &escolha);
    mediaaluno(p1,p2,p3, escolha);
    }
  return 0;
}