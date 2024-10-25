#include <stdio.h>

int main(void) {
int t,p,n,z,i,ti;
  p = 0;
  n = 0;
  z = 0;
  ti = 0;
  printf ("insira o total de números:\n ");
  scanf ("%d", &t);
for (i=0;i<t;i++){
   printf ("insira um número:\n");
   scanf ("%d",&n);
  if (n>0){
    p = p+1; 
  }
  if (n<0){
  n = n+1;  
  }
  if (n==0){
  z = z+1;
  }
}
p = p*100/t;
n = n*100/t;
z = z*100/t;
printf ("%d por cento positivos\n", p);
printf ("%d por cento negativos\n", n);
printf ("%d por cento zeros\n", z);
  return 0;
}