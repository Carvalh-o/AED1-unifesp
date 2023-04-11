/*
PROBLEMA 2242 BEECROWD
FILTRO E COMPARADOR DE VOGAIS
*/

#include <stdio.h>
#include <string.h>

void vogais(char s[51], char *p);
int check(char s[51]);

int main() 
{
  int c;
  char s1[51], s2[51];
  
  scanf("%s", s1);
  vogais(s1, &s2[0]);//filtra as vogais
  c = check(s2);//c recebe 0 ou 1 por check
  if(c==0)//decide a saida
    {
      printf("S\n");
    }else printf("N\n");
  
    return 0;
}


/* a funcao abaixo recebe a string inserida e um ponteiro para a primeira posição de um vetor char da main, separando as vogais da string e as inserindo neste vetor
nao retorna nada*/
void vogais(char s[50], char *p)
{
  int i;
  while(i<strlen(s))
    {
      if(s[i]== 97 || s[i]== 101 || s[i]== 105 || s[i]== 111 || s[i]== 117)
      {
        *p = s[i];
        p++;
        i++;
      }else i++;
    }
  *p = '\0';//marca o fim das vogais
}

/* a funçao abaixo recebe uma string e verifica se ela é igual caso lida de tras pra frente
retorna 0 caso sim e 1 caso nao */
int check(char s[51])
{
  int i, j, c=0;
  j = (strlen(s)-1);
  for(i=0; i<strlen(s); i++)
    {
      if(s[i]!=s[(j-i)])
      {
        c=1;
      }
    }
  return c;
}