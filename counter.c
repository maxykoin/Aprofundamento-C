#include "stdio.h"
int main(void) {
  int n = 1;

  do {
    printf("%i\n", n++);
  } while (n <= 100);

  return 0;
}
