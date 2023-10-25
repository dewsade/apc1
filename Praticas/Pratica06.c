#include <stdio.h>
#include <math.h>

int main() {
 int a = -6;
 int b = 1;
 int c = 5;

double delta = pow(b,2) - 4 * a * c;
double X1 = (- b + sqrt(delta)) /2 * a;
double X2 = (- b - sqrt(delta)) /2 * a;
printf("As raizes da equacao %ix²+ %ix - %i sao %f e %f\n", a, b, c, X1, X2);

  return 0;
  
}