/*--------------------------------------------
* This program removes gray from RGB. 
* Given integer values for red, green, and blue, it will subtract the gray from each value.
*
*
* Class: CS 107, Fall 2024
* Author: Riyab Ismail
* Date: September 14th, 2024
--------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//Declaring and getting the variables for RGB from the user.
   int red;
   int green;
   int blue;

   scanf("%d", &red);
   scanf("%d", &green);
   scanf("%d", &blue);

// Conditions to see which value is the smallest and then subtracting that value from red, green
// and blue to eliminate mixing of the 3 colours which results in gray. (1 value has to be 0)

   if (red < green && red < blue) {
    green -= red;
    blue -= red;
    red = 0;

    printf("%d %d %d\n", red, green, blue);
   }
   else if (green < red && green < blue) {
    red -= green;
    blue -= green;
    green = 0;

    printf("%d %d %d\n", red, green, blue);
   }
   else if (blue < green && blue < red) {
    red -= blue;
    green -= blue;
    blue = 0;

    printf("%d %d %d\n", red, green, blue);
   }
   else {
    printf("0 0 0\n");
   }
   

   


   return 0;
}
