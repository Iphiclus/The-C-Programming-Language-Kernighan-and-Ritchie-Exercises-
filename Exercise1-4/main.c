/*
 * Filename:    main.c
 * Author:      Georgina Hall
 * Date:        08-MAY-2019
 *
 * The C Programming Language, second edition,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Exercise 1-4, page 13
 *
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table.
 */

#include <stdio.h>

/* print Celsius-Fahrenheit table
for Celsius = 0, 20 ..., 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
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