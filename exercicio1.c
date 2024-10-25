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

printf ("%d positivos\n", p);
printf ("%d negativos\n", n);
printf ("%d zeros\n", z);



  
  return 0;
}