#include <stdio.h>
#include "util.h"

void euclidean_gcd(int n1, int n2) {
int remainder;
/*Taking the integers from the user.*/
printf("Please enter the first integer to calculate GCD:");
scanf("%d", &n1);
printf("Please enter the second integer to calculate GCD:");
scanf("%d", &n2);
/*Calculating GCD using the Euclidean algorithm*/
while (n2 != 0)
{
    remainder = n1 % n2;
    n1 = n2;
    n2 = remainder;
    }  
printf("The gcd of the desired values calculated with Euclidean algorithm is: %d\n",n1);    
}


void sum(int n1, int n2) {
int sum;
/*Taking the integers from the user.*/
printf("Please enter the first integer to calculate their sum:");
scanf("%d", &n1);
printf("Please enter the second integer to calculate their sum:");
scanf("%d", &n2);
    sum = n1 + n2;
    /*Using %d to type the integers in the given distance.*/	
    printf("First Number : %d\n", n1);
    printf("Second Number: %d\n", n2);
    printf("Result:\n");
    printf("%12d\n", n1);
    printf("%12d\n", n2);
    printf("     +\n");
    printf("     -------\n");
    printf("%12d\n", sum);
}
void product(int n1, int n2) {
int product,a,b,c,result1,result2,result3;
/*Taking the integers from the user.*/
printf("Please enter the first integer to calculate their product:");
scanf("%d", &n1);
printf("Please enter the second integer to calculate their product:");
/*Using various values to print the calculation.*/
scanf("%d", &n2);
product = n1 * n2;
a = n2 % 10;

if (n2/100 != 0){	
    b = (n2 / 10) % 10;
    c = n2 / 100;
    result1 = a * n1;
    result2 = b * n1;
    result3 = c * n1;
    printf("First Number : %d\n", n1);
    printf("Second Number: %d\n", n2);
    printf("Result:\n");
    printf("%13d\n", n1);
    printf("%13d\n", n2);
    printf("      *\n");
    printf("      -------\n");
    /*Using if to print 000 if result1 equals 0*/
    if (result1==0){
    printf("          000\n");
    }
    else{
    printf("%13d\n", result1);
    }
    if (result2==0){
    printf("         000\n");
    }
    else{
    printf("%12d\n", result2);
    }
    printf("%11d\n", result3);
    printf("      +\n");
    printf("      -------\n");
    printf("%13d\n", product);
    }
else if (n2/10 != 0){
    b = n2 / 10;
    result1 = a * n1;
    result2 = b * n1;
    printf("First Number : %d\n", n1);
    printf("Second Number: %d\n", n2);
    printf("Result:\n");
    printf("%13d\n", n1);
    printf("%13d\n", n2);
    printf("      *\n");
    printf("      -------\n");    
    if (result1==0){
    printf("           00\n");
    }
    else{
    printf("%13d\n", result1);
    }
    printf("%12d\n", result2);
    printf("      +\n");
    printf("      -------\n");
    printf("%13d\n", product);
    
}
else if (n2/1 != 0){
    printf("First Number : %d\n", n1);
    printf("Second Number: %d\n", n2);
    printf("Result:\n");
    printf("%13d\n", n1);
    printf("%13d\n", n2);
    printf("      *\n");
    printf("      -------\n");
    printf("%13d\n", product);  
}
else if (n2/1 == 0){
    printf("First Number : %d\n", n1);
    printf("Second Number: %d\n", n2);
    printf("Result:\n");
    printf("%13d\n", n1);
    printf("%13d\n", n2);
    printf("      *\n");
    printf("      -------\n");
    printf("%13d\n", product);     
}    
}
void comparison(n1){
/*Taking the integer from the user.*/
printf("Please enter an integer between 1-10(inclusive):");
scanf("%d", &n1);

    if(n1>5 && n1<=10){
    printf("The integer you entered is greater than 5.");
    }
    if(n1>=1 && n1<=5){
    printf("The integer you entered is less than or equal to 5.");
    }
    if(n1>10){
    printf("Invalid input.");
    }
    if(n1<1){
    printf("Invalid input.");
    }
}    
   
   
