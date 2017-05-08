#include <stdio.h>
#include <stdlib.h>

void Opera(double x, double y) {
  sum=x+y;
  sub=x-y;
  mult=x*y;
  divi=x/y;

  printf("Soma: %.2lf\nSubtracao: %.2lf\nMultiplicacao: %.2lf\nDivisao: %.2lf\n"
                                                        ,sum, sub, mult, divi);
}

int main(int argc, char const *argv[]) {
  double x, y, sum, sub, mult, divi;
  scanf("%lf %lf", &x, &y);

  Opera(x, y);

  return 0;
}
