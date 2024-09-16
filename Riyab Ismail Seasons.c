/*--------------------------------------------
*  This program takes a date as input and outputs the 
*  date's season in the northern hemisphere!
*
* Class: CS 107, Fall 2024
* Author: Riyab Ismail
* Date: September 16th, 2024
--------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
   char inputMonth[50];
   int inputDay;
   
// Declaring the strings (months of the year) which we will use later to match the user's
// inputted month

   char january[50] = "January";
   char february[50] = "February";
   char march[50] = "March";
   char april[50] = "April";
   char may[50] = "May";
   char june[50] = "June";
   char july[50] = "July";
   char august[50] = "August";
   char september[50] = "September";
   char october[50] = "October";
   char november[50] = "November";
   char december[50] = "December";

// Getting user input

   scanf("%s", inputMonth); 
   scanf("%d", &inputDay); 

// if else statements to match the users inputted month to the respective 
// seasons as specified

   if ((
   (strcmp (inputMonth,april) == 0) ||
   (strcmp (inputMonth,may) == 0)
    && (inputDay > 0 && inputDay <= 31))) {

    printf("Spring\n");
   }

      else if (((strcmp (inputMonth,june) == 0) ||
   (strcmp (inputMonth,july) == 0) ||
   (strcmp (inputMonth,august) == 0) ||
   (strcmp (inputMonth,september) == 0)) && (inputDay > 0 && inputDay <= 31)) {

    printf("Summer\n");
   }

    else if (((strcmp (inputMonth,october) == 0) ||
   (strcmp (inputMonth,november) == 0) ||
   (strcmp (inputMonth,december) == 0) 
    && (inputDay > 0 && inputDay <= 31))) {

    printf("Autumn\n");
   }

      else if (((strcmp (inputMonth,december) == 0) ||
   (strcmp (inputMonth,january) == 0) ||
   (strcmp (inputMonth,february) == 0) ||
   (strcmp (inputMonth,march) == 0)) && (inputDay > 0 && inputDay <= 31)) {

    printf("Winter\n");
   }

   else {
    printf("Invalid\n");
   }






   return 0;
}