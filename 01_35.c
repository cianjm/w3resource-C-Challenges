/* 
Write a C program that reads an integer between 1 and 12 and print the month of the year in English. 
*/

#include <stdio.h>
int main(void){
    int num1, num2;
    printf("Input first number of the pair: ");
    scanf("%d", &num1);
    printf("\nInput second number of the pair: ");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("\nThe pair is in descending order");
    else if (num2 > num1)
        printf("\nThe pair is in ascending order");
    return 0;
}
