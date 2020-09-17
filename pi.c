#include <stdio.h>
#include <stdlib.h>

int main(){

  int i, p=0, n;
  float x, y, PI;

  printf("entrer une valeur de n \n");
  scanf("%d",&n);
  for (i=0; i<=n; i++) 
  {
    x = rand()*1.0 / RAND_MAX * (1+1)+(-1);
    y = rand()*1.0 / RAND_MAX * (1+1)+(-1);

      if (x*x +y*y <= 1)
      {
        p++;
      }
  }

  PI = 4*(p*1.0/n);
  printf(" Pi est de %f ", PI);
  return 0;
}