#include <stdio.h>

/* copy input to output; 1st version */

main() {
  int c;

  while ((c = getchar())) {
    if (c ==  EOF) {
      printf("Value of EOF: %d\n", c);
      break;
    }
    putchar(c);
  }
}