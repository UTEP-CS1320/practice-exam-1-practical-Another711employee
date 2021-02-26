/*
*   PRACTICE EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (2/19/2021)
*/
#include <stdio.h>

int main(void) {
  long x = 10;

  printf("%ld", x);

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Last Digits
     ***************************/
    
    // TODO: Fix the code below.
    int x, y;
    scanf("%d %d", &x, &y);
   //for this modulo operator we are obtaining the last two digits and this modulo division will obtain values from 0 to 99.
    int x_digit = x % 100;
    int y_digit = y % 100;
   // if both results are the same it will print true
    if(x_digit == y_digit) {
      printf("TRUE");
    }
    //else means it is false
    else {
      printf("FALSE");
    }
    
    
    
    /* Problem 1 End */
  } else if(opt == 2) {
    
    /***************************
     *  Problem 2: Lotto
     ***************************/
    char winner[5] = "7239";
    char ticket[5];
    int number;

     scanf("%s", ticket);
   // for every digit that matches the winner ticket, number will have 1 added to itself.
    if(winner[1]== ticket[1]) {
      number+= 1;
    }
    if (winner [2]== ticket [2]){
       number+= 1;
    }
    if (winner [3]== ticket[3]){
       number+= 1;
    }
    if (winner [4]== ticket[4]){
       number+= 1;
    }
// Depending on the amount of points accumulated, you will have either first prize, second prize, third prize or none!
    if( number ==2){
      printf("3rd Prize!\n");
    }
    else if( number ==3){
    printf("2rd Prize!\n");
  }
   else if( number ==4){
    printf("1rd Prize!\n");
  }
  else{
    printf("Better luck next time!\n");
  }
 

    scanf("%s", ticket);
    
    // TODO: Your P2 code goes here
    
    /* Problem 2 End */
  } else if(opt == 3) {
    
    /***************************
     *  Problem 3: Hex2Dec
     ***************************/
    char hex_in[5];
    scanf("%s", hex_in);

    //TODO: Your P3 code goes here
    
    /* Problem 3 End */
  }
}
