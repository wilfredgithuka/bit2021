#include <stdio.h>
#include <complex.h>

double complex z1;
double complex z2;

double complex sum;
double complex diff;
double complex product;

int main()
{
  //printf("Enter the first number: \n");
  //scanf("%f", &z1);
  //printf("Enter the second number: \n");
  //scanf("%f", &z2);

  z1 = 5.0 + 1.0 * I;
  z2 = 9.0 - 8.0 * I;

  sum = z1 + z2;
  diff = z1 - z2;
  product = z1 * z2;

  printf("Complex numbers:\n\v");

  printf("z1 = %.2f + %.2fi\tz2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));


  printf("The sum is %.2f %+.2fi\n", creal(sum), cimag(sum));
  printf("The difference is %.2f %+.2fi\n", creal(diff), cimag(diff));
  printf("The product is %.2f %+.2fi\n", creal(product), cimag(product));

  return 0;
}
