#include <stdio.h>


int main() {
  int c, blank;
  while ((c = getchar()) != EOF) {
    if(c != ' ') {
      if (blank == ' ')
        putchar(blank);
      putchar(c);
    }
    blank = c;
  }
}