#include <stdio.h>

int 
main(void)
{
	int c, x;
	while((c = getchar()) != EOF) {
		x = 0;
		if (c == '\t') {
			x = 1;
			// These all can be replaced with something like printf("\\t");
			putchar('\\');
			putchar('t');
		}
		if (c == '\b') {
			x = 1;
			putchar('\\');
			putchar('b');
		}
		// You did not have to do these two cases below.
		if (c == '\\') {
			x = 1;
			putchar('\\');
			putchar('\\');
		}
		if (c == '\n') {
			x = 1;
			putchar('n');
		}
		if (x==0)
			putchar(c);
	}
	putchar('\n');
}
