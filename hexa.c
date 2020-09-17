#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("entrer un caractère");
  char c = getchar();
  int s = 0;

  while ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))
  {

      s = s*16;

    if (c >= '0' && c <= '9')
      s = s + c - '0';

    if (c >= 'a' && c <= 'f')
      s = s + c - 'a';
      
    if (c >= 'A' && c <= 'F')
      s = s + c - 'A';

  }
printf (" %d", s);
return 0;
}