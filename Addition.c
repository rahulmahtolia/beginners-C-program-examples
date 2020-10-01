#include<stdio.h> // Including the header file for handling input and output
void main() // Main function
{ 
  int num1,num2,num3;  // declaring three variables of integer datatype
  printf("Enter two Numbers : "); // Asking for the input from the user
  scanf("%d %d",&num1,&num2); // storing the value in num1 and num2
  num3=num1+num2; // performing the addition
  printf("The sum is %d",num3); // Printing the sum
}
