#include <stdio.h>

int main(void) {

 
  float valorcompra = 1, valorvenda, lucro, lucro_p, valorcompra_total, valorvenda_total, lucro_total;
  int i = 1, lucro_menor_10 = 0, lucro_entre_10_20 = 0, lucro_maior_20 = 0;

 
  printf("Digite o preço de compra e o preço de venda de cada mercadoria comercializada:\n"
         "(Utilize o preço de compra igual a zero para terminar a lista)\n\n");

 
  while (valorcompra != 0)
    {
      printf("Mercadoria %d:\n", i);
      printf("Preço de compra: R$");
      scanf("%f", &valorcompra);
      if (valorcompra == 0) break; 
      
      printf("Preço de venda: R$");
      scanf("%f", &valorvenda);
      printf("\n");

      
      lucro = valorvenda - valorcompra;
     
      lucro_p = (lucro / valorcompra) * 100;

  
      if (lucro_p  < 10)
      {
        lucro_menor_10++;
      }
      else if (lucro_p >= 10 && lucro_p <= 20)
      {
        lucro_entre_10_20++;
      }
      else
      {
        lucro_maior_20++;
      }

    
      valorcompra_total += valorcompra;
      valorvenda_total += valorvenda;
      lucro_total += lucro;
      
      i++; 
    }

  
  printf("%d mercadorias com lucro menor que 10%%\n"
    "%d mercadorias com lucro entre 10%% e 20%%\n"
    "%d mercadorias com lucro maior que 20%%\n"
    ,lucro_menor_10, lucro_entre_10_20, lucro_maior_20);
  
  printf("O valor total de compra de todas as mercadorias foi de R$%.2f\n"
    "O valor total de venda de todas as mercadorias foi de R$%.2f\n"
    "O lucro total de todas as mercadorias foi de R$%.2f\n"
    ,valorcompra_total, valorvenda_total, lucro_total);
  return 0;
}