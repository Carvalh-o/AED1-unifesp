/*
PROBLEMA 1238 BEECROWD
Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, 
alternando as letras de cada string, começando com a primeira letra da primeira string, 
seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, 
e assim sucessivamente. 
As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.
*/

#include <stdio.h>
#include <string.h>
int main()
{
  int n, i;
  char c1[50], c2[50];
  scanf("%d", &n);
  
  while(n>0)
  {
    i=0;//reinicia o contador a cada loop
    scanf("%s %s", c1, c2);

    //o if abaixo trata dos casos em que a c1>c2
    if(strlen(c1)>strlen(c2))
    {
      while(i<(strlen(c2)))//combina ate que c2 acabe
      {
        printf("%c", c1[i]);
        printf("%c", c2[i]);
        i++;
      }
      while(i<(strlen(c1)))//imprime o restante
      {
        printf("%c", c1[i]);
        i++;
      }
      printf("\n");
    }else//trata dos casos em que c1==c2 ou c2>c1
      {
        while(i<(strlen(c1)))//combina ate que c1 acabe
      {
        printf("%c", c1[i]);
        printf("%c", c2[i]);
        i++;
      }
      while(i<(strlen(c2)))//imprime o restante
      {
      printf("%c", c2[i]);
      i++;
      }
      printf("\n");
      }
    n--;
    }
      return 0;
}
