#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum variable number of arguments
 * @n: Number of arguments
 *
 * Return: Sum of the arguments 
 */


int sum_them_all(const unsigned int n, ...) {

    va_list args;
    int sum = 0;    
    unsigned int i;
    
    va_start(args, n);  
    if (n != 0) {
        

        for (i = 0; i < n; i++) {
            sum = va_arg(args, int);
        }

        va_end(args);
        return (sum);
    }

    return 0;
}
