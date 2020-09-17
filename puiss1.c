#include <stdio.h>
#include <stdlib.h>

int main()
{
int k, i;
float x, s=1;

 printf("entrer un nombre \n");
 scanf("%f", &x);
 printf("entrer sa puissance \n");
 scanf("%d", &k);

  if(k < 0)
  {
    printf("entrer une valeur de puissance pOsitive et non nulle");
    return EXIT_FAILURE;
  }
  
    else
    {
      for(i=1; i <= k; i++)
      {
        s = s * x; 
      }
    }

 printf("la valeur est de %f", s);
 return 0;
}
