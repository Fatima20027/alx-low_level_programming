#include <stdio.h>
#include "main.h"



unsigned int binary_to_uint(const char *b){

	 if (b == NULL)
        return 0;

    unsigned int result = 0;

    // Iterate through each character in the string
    for (int i = 0; b[i] != '\0'; i++) {
        // Check if the character is '0' or '1'
        if (b[i] == '0' || b[i] == '1') {
            // Update the result by left-shifting and adding the current bit
            result = (result << 1) | (b[i] - '0');
        } else {
            // Invalid character found, return 0
            return 0;
        }




}
