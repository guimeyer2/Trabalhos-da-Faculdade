#include <stdio.h>
char procedimento (int idade)
{
  if (idade >= 5 && idade <= 7) return 'F';
  else if (idade >= 8 && idade <= 10) return 'E';
  else if (idade >= 11 && idade <= 13) return 'D';
  else if (idade >= 14 && idade <= 15) return 'C';
  else if (idade >= 16 && idade <= 17) return 'B';
  else return 'A';
}




int main(void) {
int idade=0;
  printf ("insira a idade do nadador:\n");
  scanf ("%d", &idade);
  printf ("a categoria é: %c\n", procedimento(idade));
  return 0;
}