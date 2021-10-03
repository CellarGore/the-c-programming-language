#include <stdio.h>

#define LOWER 0   /* lower limit of temperature table */
#define UPPER 55  /* upper limit */
#define STEP 2    /* Step size */

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

main()
{
  float fahr, celsius;

  celsius = LOWER;
  printf("%s\t%s\n", "Celsius", "Fahrenheit");
  while (celsius <= UPPER) {
    fahr = (celsius * 9.0/5.0) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + STEP;
  }
}
