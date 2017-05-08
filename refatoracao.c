#include <stdio.h>
#include <stdlib.h>

double Soma(double x, double y) {
  scanf("%lf %lf", &x, &y);
  return x+y;
}

double Subtracao(double x, double y) {
  scanf("%lf %lf", &x, &y);
  return x-y;
}

double Multiplicacao(double x, double y) {
  scanf("%lf %lf", &x, &y);
  return x*y;
}

double Divisao(double x, double y) {
  scanf("%lf %lf", &x, &y);
  return x/y;
}

void ImprimeResultado(double sum, double sub, double mult, double divi) {
  printf("Soma: %.2lf\nSubtracao: %.2lf\nMultiplicacao: %.2lf\nDivisao: %.2lf\n"
                                                        ,sum, sub, mult, divi);
}

int main(int argc, char const *argv[]) {
  double x, y, sum, sub, mult, divi;

  sum=Soma(x, y);
  sub=Subtracao(x, y);
  mult=Multiplicacao(x, y);
  divi=Divisao(x, y);

  ImprimeResultado(sum, sub, mult, divi);

  return 0;
}
