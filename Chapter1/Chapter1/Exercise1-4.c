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

	printf("Converstion table of Celsius and Fahrenheit\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);

		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}