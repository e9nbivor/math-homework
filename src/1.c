// A simple C program to calculate the sum of two numbers
#include <stdio.h>

int main() {
   int num1, num2, sum;

   // Getting user input for numbers to be added
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   // Calculating the sum of two numbers
   sum = num1 + num2;

   // Printing the sum
   printf("Sum is: %d\n", sum);

   return 0;
}
