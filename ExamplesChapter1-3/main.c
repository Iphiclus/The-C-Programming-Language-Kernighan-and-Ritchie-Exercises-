/*
 * Filename:    main.c
 * Author:      Georgina Hall
 * Date:        08-MAY-2019
 *
 * The C Programming Language, second edition,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Example 1-3, The For Statement page 13
 *
 * Variation on the temperature converter.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table */
main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr +20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}