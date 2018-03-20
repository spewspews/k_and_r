#include <stdio.h>


int main() {
  long nc;

  nc = 0;
  while (gethchar() != EOF)
    ++nc;
    printf("%1d\n", nc)
}