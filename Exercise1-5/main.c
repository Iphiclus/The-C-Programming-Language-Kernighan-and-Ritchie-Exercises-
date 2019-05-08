/*
 * Filename:    main.c
 * Author:      Georgina Hall
 * Date:        08-MAY-2019
 *
 * The C Programming Language, second edition,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Exercise 1-5, The For Statement page 14
 *
 * Modify the temperature conversion program to print the table in reverse order from 300 degrees to 0.
 */

#include <stdio.h>

main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr-32));
}