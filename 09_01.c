/* 
Write a program in C to create and display Singly Linked List.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *nextnode;
};

int main(void){
    int n, value;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    
    struct node *finalnode, *tempnode;
    struct  node *startnode = malloc( sizeof(*startnode));

    printf("\nInput data for node 1: ");
    scanf("%d", &value);
    startnode->data = value;
    startnode->nextnode = NULL;
    tempnode = startnode;
    
    for (int i = 2 ; i < n ; i++) {
        finalnode = malloc(sizeof(finalnode));
        printf("\nInput data for node %d: ", i);
        scanf("%d", &value);
        finalnode->data = value;
        finalnode->nextnode = NULL;
        tempnode->nextnode = finalnode;
        tempnode = finalnode;
    }
    
    printf("\n\nData entered in list: ");
    tempnode = startnode;
    while (tempnode != NULL) {
        printf("\nNode value is %d", tempnode->data);
        tempnode = tempnode->nextnode;
    }
    
    return 0;
}
