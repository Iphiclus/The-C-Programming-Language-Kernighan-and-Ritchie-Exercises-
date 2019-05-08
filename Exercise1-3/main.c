/*
 * Filename:    main.c
 * Author:      Georgina Hall
 * Date:        08-MAY-2019
 *
 * The C Programming Language, second edition,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Exercise 1-3, page 13
 *
 * Modify the temperature conversion program to print a heading above the table.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20 ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    // Added in a heading
    printf("Fahrenheit to Celsius conversion table:\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}