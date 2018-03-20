#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  FILE *file;
	file = fopen("file.txt", "r");

  int c, n1, nw, nc, state, word;

  state = OUT;
  n1 = nw = nc = word = 0;

  while((c = fgetc(file)) != EOF ) {
    ++nc;
    if(c == '\n')
      ++n1;
      if(c == ' ' || c == '\n' || c == '\t') {
        state = OUT;
      }
      else if (state == OUT) {
        state = IN;
        ++nw;
        putchar('\n');
      }
    putchar(c);
  }
}