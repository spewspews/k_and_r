#include <stdio.h>

#define TNOCHAR 128 
int main() {
  FILE *file;
	file = fopen("file.txt", "r");
   int c,i,j;

    int character[TNOCHAR];
    
    for(i=0;i<TNOCHAR;++i)
        character[i] = 0;
    
    while((c = fgetc(file))!=EOF)
        ++character[c];

    for(i=0;i<TNOCHAR;++i)
    {
        putchar(i);
        
        for(j=0;j<character[i];++j)
            putchar('*');
        
        putchar('\n');
    }
}