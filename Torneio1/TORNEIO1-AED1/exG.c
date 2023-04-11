/*
PROBLEMA 1871 BEECROWD
Escreva um programa que, dado dois números inteiros, sem o algarismo zero, some os mesmos e, 
caso o resultado tenha algum algarismo zero, que os retire antes de exibir.
*/

#include <stdio.h>
#include <string.h>
int main()
{
  int a=1, b=1, i=0;
  char soma[11];
  while(i>-1)//loop "infinito"
  {
    scanf("%d %d", &a, &b);
    if(a==0&&b==0) return 0;//nao processa no caso 00
    i=0;

    a = a + b;
    sprintf(soma, "%d", a);//transforma o valor da soma e uma string
    while(i<strlen(soma))
      {
        if(soma[i]!='0')//imprime o que nao for 0
        {
          printf("%c", soma[i]);
        }
        i++;
      }
    printf("\n");
  }
      return 0;
}