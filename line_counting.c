#include <stdio.h>
#define  MAX_LEN  250

int main() {
	FILE *file;
	file = fopen("file.txt", "r");
  int n1, c, blanks, tabs, noop, ch;
  n1 = blanks = tabs = noop = 0;

	while ((c = fgetc(file)) != EOF)
			if (c == 32) {
				continue;
			}
		putchar(c);
}
