/*--------------------------------------------
* Given 3 integers, this program will find and output the smallest of the 3 values!
* 
*
* Class: CS 107, Fall 2024
* Author: Riyab Ismail
* Date: September 14th, 2024
--------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

// Declaring variables and getting the 3 integer inputs from the user
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);


// Setting conditions to find which of the 3 integers is the smallest and then printing out the
// smallest value.
    if (num1 <= num2 && num1 <= num3) {
        printf("%d\n", num1);
    }
    else if (num2 <= num1 && num2 <= num3) {
        printf("%d\n", num2);
    }
     else if (num3 <= num1 && num3 <= num2) {
        printf("%d\n", num3);
    }
    

   

   return 0;
}
