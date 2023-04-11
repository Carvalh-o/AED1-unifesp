/*
PROBLEMA 1002 BEECROWD
A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:
Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
*/

#include <stdio.h>
int main()
{
  double a, r;
  
  scanf("%lf", &r);
  a = 3.14159 * r * r; //area = pi * r * r

  printf("A=%.4lf\n", a);

    return 0;
}
