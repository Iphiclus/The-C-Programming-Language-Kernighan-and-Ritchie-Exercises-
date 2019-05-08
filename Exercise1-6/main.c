/*
 * Filename:    main.c
 * Author:      Georgina Hall
 * Date:        08-MAY-2019
 *
 * The C Programming Language, second edition,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Exercise 1-6, page 17
 *
 * Verify that the expression getchar() !=EOF is 0 or 1
 */

#include <stdio.h>

main()
{
    printf("Enter a char\n");
    printf("getchar() != EOF : %d\n", getchar() != EOF);
}