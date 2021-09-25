#include<stdio.h>//write include 

int main()//write int main
{

float mealCost = 13.25; //assign float mealcost
float tax = 6.75 * mealCost / 100; //assign float tax calc
float tip = 20 * (mealCost + tax)/ 100; //assign float tip calc
float totalBill = mealCost + tax + tip;//assign float totalbill calc
printf("Meal cost: 4%.2f\n", mealCost);//print out  meal cost
printf("Meal cost: 4%.2f\n", tax);//print out tax cost
printf("Meal cost: 4%.2f\n", tip);//print out tip cost
printf("Meal cost: 4%.2f\n", totalBill);//print out totalbill
return 0;
}