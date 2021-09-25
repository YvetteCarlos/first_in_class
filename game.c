#include <stdio.h>
 
int main () {
 int a = 8, b, c, d;//assign integers

 printf("Press 1 to play a game\n");
 printf("Press 2 to change the max number\n"); 
 printf("Press 3 to quit\n");//print out press 1,2, and 3
 scanf("%d", &b);//scan 

if( b == 1 ) { //if statements
     
      printf("Enter a Number between 1-10\n" );
      scanf("%d", &c);
   
   if( c == a ) { 
      
      printf("You won! Go back to the menu.\n" );

   } if ( c < a ) {
     
      printf("Number is too low\n" );
     
   }  if ( c > a ){
      
      printf("Number is too high\n" );
   }
   }else if (b == 2 ) {             //else if statements
       printf("Do not enter a negative number or go above the max value 10.");
   }
    else if (b == 3 ) {
       printf("Thanks for playing");
   }
   

       return 0;
}


