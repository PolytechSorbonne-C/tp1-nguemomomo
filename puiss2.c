#include <stdio.h>
#include <stdlib.h>

int main()
{
int k;
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
  
    while (k > 0)
    {
      //imPair
      if (k%2 == 1)
      {
        s=s*x;
        x=x*x;
        k=k/2;

      }
      
      //pair
      if (k%2 == 0)
      {
        x=x*x;
        k=k/2;
      }
    }

 printf("la valeur est de %f", s);
 return 0;
}

// Dans le cas k=18 on fait 5 tour de boucle.