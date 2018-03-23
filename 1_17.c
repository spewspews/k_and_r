#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline, FILE *file);
void copy(char to[], char from[]);

int main() {
  FILE *file;
	file = fopen("file.txt", "r");
  int len, c;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while((len = getlines(line, MAXLINE, file)) >0)
    if (len > 80) {
      max = len;
      copy(longest, line);
      printf("%s\n", longest);
    }
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

void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}