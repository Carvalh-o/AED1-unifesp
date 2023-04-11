/*
PROBLEMA 1036 BEECROWD
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
caso haja uma divisão por 0 ou raiz de numero negativo.
*/

#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, d, r1, r2;
  
  scanf("%lf %lf %lf", &a, &b, &c);
  if(a == 0)
  {
    printf("Impossivel calcular\n");//nao ha raiz se a == 0
    return 0;
  }
  
  d = (b*b)-4*a*c;
  
  if(d<0)
  {
    printf("Impossivel calcular\n");//nao ha raiz se d < 0
  }
   else if(d == 0)
    {
      r1 = ((b*(-1))+sqrt(d))/(2*a);
      printf("R1 = %.5lf\n", r1);
    }else
      {
        r1 = ((b*(-1))+sqrt(d))/(2*a);
        r2 = ((b*(-1))-sqrt(d))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
      }
    return 0;
}
