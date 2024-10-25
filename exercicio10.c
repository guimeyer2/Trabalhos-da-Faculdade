#include <stdio.h>
void instrucao()
{
  printf("insira o código do seu voto seguindo o seguinte:\n");
  printf("1,2,3,4 = voto para os respectivos candidatos;\n5 = voto nulo;\n6 = voto em branco;\n");
  printf("para encerrar digite 0.\n\n");
}
int main(void) {
int codigo_voto = 1, i = 1;
  int total_votos_candidato_1 = 0, total_votos_candidato_2 = 0, total_votos_candidato_3 = 0, total_votos_candidato_4 = 0;
  int total_votos_nulos = 0, total_votos_brancos = 0;


  instrucao();

 
  while (codigo_voto != 0)
    {
      printf("Eleitor %d:\n", i);
      printf("Código: ");
      scanf("%d", &codigo_voto);
      printf("\n");

     
      if (codigo_voto == 0)
      {
        break;
      }
      
      else if (codigo_voto > 6 || codigo_voto < 0) 
      {
        printf("Código inválido\n");
        return 1;
      }

      
      if (codigo_voto == 1)
      {
        total_votos_candidato_1++;
      }
      else if (codigo_voto == 2)
      {
        total_votos_candidato_2++;
      }
      else if (codigo_voto == 3)
      {
        total_votos_candidato_3++;
      }
      else if (codigo_voto == 4)
      {
        total_votos_candidato_4++;
      }
      else if (codigo_voto == 5)
      {
        total_votos_nulos++;
      }
      else
      {
        total_votos_brancos++;
      }

      i++; 
    }


  printf("Candidato 1: %d voto(s)\n", total_votos_candidato_1);
  printf("Candidato 2: %d voto(s)\n", total_votos_candidato_2);
  printf("Candidato 3: %d voto(s)\n", total_votos_candidato_3);
  printf("Candidato 4: %d voto(s)\n", total_votos_candidato_4);
  printf("Votos nulos: %d voto(s)\n", total_votos_nulos);
  printf("Votos brancos: %d voto(s)\n", total_votos_brancos);
  return 0;
}
