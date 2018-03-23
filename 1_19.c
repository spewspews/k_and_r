#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline, FILE *file);
void reverse(char to[]);

int main() {
  FILE *file;
	file = fopen("file.txt", "r");
  int len, c;
  char line[MAXLINE];
  char longest[MAXLINE];

  while((len = getlines(line, MAXLINE, file)) >0)
    reverse(line);
    printf("%s\n", line);
  return 0;
}


int getlines(char s[], int max, FILE *file)
{
  int c, i;

  for(i = 0; i < max-1 && (c = fgetc(file)) != EOF && c!= '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void reverse(char line[])
{

}