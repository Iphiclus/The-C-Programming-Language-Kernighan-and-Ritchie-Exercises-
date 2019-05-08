/*
 * Filename:    main.c
 * Author:      Georgina Hall
 * Date:        08-MAY-2019
 *
 * The C Programming Language, second edition,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Example 1-5-1, page 16
 *
 * File Copying
 */

#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}