/* 
Write a program in C to create and display Singly Linked List.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int main(void){
    int n, val;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    struct node *start = malloc( sizeof(*start) );
    struct node *end, *temp, *temp1, *temp2;

    // Create the linked list    
    printf("\nInput node 1 value: ");
    scanf("%d", &val);
    start->value = val;
    start->next = NULL;
    temp = start;
    for (int i = 2; i <= n ; i++) {
        end = malloc( sizeof(*end) );
        printf("\nInput node %d value: ", i);
        scanf("%d", &val);
        end->value = val;
        end->next = NULL;
        temp->next = end;
        temp = end;
    }
    
    // Reverse the list
    // temp2 will be the next node, temp1 will be the previous node.
    end = start;
    temp = end;
    temp2 = temp->next;
    temp->next = NULL;
    while (temp2 != NULL) {
        // move all 3 temp structs forward by 1
        temp1 = temp;
        temp = temp2;
        temp2 = temp->next;
        // make link point backwards
        temp->next = temp1;
    }
    start = temp;
    // Print output of new list
    printf("\nThe list in reverse is: ");
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    
    return 0;
}
