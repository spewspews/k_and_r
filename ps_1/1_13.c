#include <stdio.h>
#define MAXLENGTH 25

int 
main(void) {
  int word[MAXLENGTH];
  int i,c,j,nc,nw;
	nc = nw = 0;

	for(i = 0; i < MAXLENGTH; ++i)
		word[i]=0;

	while (((c = getchar()) != EOF)) {
		++nc;
		if( c == ' ' || c =='\n' || c =='\t') {
			word[++nw] = nc-1;
			nc = 0;
		}
  }

  for( i = MAXLENGTH; i >= 1; --i) {
    for(j=0; j <= nw; ++j) {
      if( i <= word[j])
        putchar('*');
      else  
        putchar(' ');
    }
  	putchar('\n');
  }
}
