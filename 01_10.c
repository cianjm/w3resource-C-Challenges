/* 
Write a C program that accepts two integers from the user and calculate the 
product of the two integers. 
*/

#include <stdio.h>
int main(void){
    int input1=0;
    int input2=0;
    printf("Input the first integer: ");
    scanf("%d", &input1);
    printf("Input the second integer: ");
    scanf("%d", &input2);
    int prod = input1 * input2;
    printf("Product of the above two integers = %d" , prod );
    
    return 0;
}