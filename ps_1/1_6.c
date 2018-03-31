#include <stdio.h>

int
main(void) {
  int c;

  while((c = getchar()) != EOF)
    printf("%d", c);
    if (c == EOF)
      printf("%s, %d\n", "\nthis is the end of the file vlue",c);

}


/* output
  116104105115321051153297321151011101161011109910132102111114321073811410
  this is the end of the file, -1
*/
