#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    /* lower limit of temperature table */
  upper = 55;  /* upper limit */
  step = 2;    /* step size */

  celsius = lower;
  printf("%s\t%s\n", "Celsius", "Fahrenheit");
  while (celsius <= upper) {
    fahr = (celsius * 9.0/5.0) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
