#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
    int i;

    // Push elements into stack
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    stack[++top] = 40;

    // Display stack
    printf("Stack elements are:\n");
    for(i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    // Peek operation
    if(top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Top element is: %d\n", stack[top]);
    }

    return 0;
}
