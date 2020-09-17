#include <stdio.h>

int main(){
  int i;

  for(i=1; i <= 100; i++){
    
     if ((i%7 == 0 || i%10 == 7) && (i%3 == 0 || i%10 == 3))
        printf (" fizzbuzz ");

        else if (i%3 == 0 || i%10 == 3)
          printf (" fizz ");

          else if(i%7 == 0 || i%10 == 7)
            printf (" buzz ");
          

            else 
              printf(" %d ", i);
            
    
  }
  return 0; 
}