/* 
 Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
*/

#include <stdio.h>
int main(void){
    float S = 0;
    for (int i = 1 ; i <= 50 ; i++) {
        S += 1/(float) i;
    }
    printf("Value of S: %.2f", S);
    return 0;
}