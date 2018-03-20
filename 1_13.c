#include <stdio.h>
#define MAXWL 20  
#define MAXNO 25

int main() {
  FILE *file;
	file = fopen("file.txt", "r");
  int word[MAXNO];
  int i,c,j,nc,nw;

   for(i=0;i<MAXNO;++i)
    word[i]=0;

  nc = nw = 0;

   while (((c = fgetc(file)) != EOF) && i < 30) 
   {
    ++nc;
    if( c ==' ' || c =='\n' || c =='\t')
    {
      word[nw] = nc -1; 
      ++nw;
      nc = 0;
    }
  
  }

  for( i = MAXWL; i >= 1; --i)
  {
    for(j=0;j <= nw;++j)
    {
      if( i <= word[j])
        putchar('*');
      else  
        putchar(' ');
      }
  putchar('\n');
  }
  fclose(file);
}
