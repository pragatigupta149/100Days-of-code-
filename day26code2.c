//Q.Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
//////////////////////////
    
#include <stdio.h>

int main() {
    // Print the pattern as shown

    printf("*\n\n");             // First single star

    printf("*\n*\n*\n*\n\n");    // Four stars with a blank line after

    printf("*\n*\n*\n*\n*\n\n"); // Five stars with a blank line after

    printf("*\n*\n*\n\n");       // Three stars with a blank line after

    printf("*\n");               // Last single star

    return 0;
}
