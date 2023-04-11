/*
PROBLEMA 1253 BEECROWD
Cifra de Cesar
*/

#include <stdio.h>
#include <string.h>
int main()
{
  int n, i, shift;
  char code[50];
  scanf("%d", &n);
  
  while(n>0)
  {
    scanf("%s %d", code, &shift);
    i=0;//reinicia i a cada loop
    
    while(i<strlen(code))
        {
          if(code[i]-shift<65)//caso passe de Z
          {
            code[i] = (code[i]+26)-shift;//retorna 1x na tabela ascii
            i++;
          }else
          {
            code[i] = code[i]-shift;
            i++;
          }
        }

    printf("%s\n", code);
    n--;
  }
      return 0;
}
