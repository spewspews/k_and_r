#include <stdio.h>

int 
main(void) {

  // printf("hello ");
  // printf("world");
  printf("%d", 10);
  printf("\n");
}


/*unknown escape sequence errors while experimenting with some args to printf
  leaving out semicolons create an expected ';' after expression
  \c is a formatter. Given the character array you want to output, you need to 
  match the type of the arguement. For example '%d' requires a type of int
  %s requires a string
*/
