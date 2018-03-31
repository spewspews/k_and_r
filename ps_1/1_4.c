#include <stdio.h>


int 
main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("Celsius  Fahrenheit\n");
  while(celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32;
    printf("%3.0f %13.1f\n", celsius, fahr );
    celsius = celsius + step;
  }
}
