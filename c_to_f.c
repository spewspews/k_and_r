#include <stdio.h>


int main() {

	float fahr, celius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celius = lower;

	while (celius <= upper) {
	  fahr = (5.0/9.0) * (celius-32.0);
		printf("%3.1f %6.0f\n", celius, fahr);
		celius = celius + step;
	}


}
