#include <stdio.h>

/* print Fahrenheit-Celsius table
for far = 0, 20 ..., 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limt of temperatur table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	printf("Conversion table of Celsius to Fahrenheit\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32;

		printf("%6.1f\t%3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}