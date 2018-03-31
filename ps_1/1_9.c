#include <stdio.h>


int 
main(void) {
  int c, last;
  printf("%d\n", last);
  while ((c = getchar()) != EOF) {
    if(c != ' ') {
      if (last == ' ')
        putchar(last);
      putchar(c);
    }
    last = c;
  }
}
