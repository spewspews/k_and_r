#include <stdio.h>

int main() {
	int c, x;
	while((c = getchar()) != EOF)
		x = 0;
		if (c == '\t')
			x = 1;
			putchar('\\');
			putchar('\n');
			putchar('t');
		if (c == '\b')
			x = 1;
			putchar('\\');
			putchar('\n');
			putchar('b');
		if (c == '\\')
			x = 1;
			putchar('\\');
			putchar('\\');
		if (x==0)
			putchar(c);
}