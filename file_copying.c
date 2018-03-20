#include <stdio.h>

int main() {
	int c;
	while ((c = getchar())) {
		putchar(c);
		//this prints 10
		if ( c != EOF ) {
			printf("%d\n", getchar());
		}
		//EOF is the character that respresents EOF
		if(c == EOF) {
			printf("%d", EOF);
		}
	}
}
