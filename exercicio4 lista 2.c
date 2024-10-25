#include <stdio.h>
void procedimento (float L1, float L2, float L3){
 if (L1+ L2 > L3 && L2 + L3 > L1&& L3 + L1> L2) 
  {
   
    if (L1== L2 && L2 == L3) 
    {
      printf("Triângulo Equilátero:\n");
    }
    else if(L1== L2 || L2 == L3 || L1== L3) 
    {
      printf("Triângulo Isósceles\n");
    }
    else 
    {
      printf("Triângulo Escaleno\n");
    }
  } 
  else 
  {
    printf("os valores não podem ser lados de triângulos\n",
      L1, L2, L3);
  }
}



int main(void) {
  float L1=0 , L2=0 , L3=0;

  while (1){  {
      printf("insira os lados do triângulo:\n");
      if (scanf("%f %f %f", &L1, &L2, &L3) != 3) break; 
      procedimento(L1, L2, L3);
    }
}
  
  return 0;
}