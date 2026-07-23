#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// Push operation
void push(int value)
{
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Peep operation
void peep(int pos)
{
    if(top - pos + 1 < 0)
    {
        printf("Invalid Position\n");
    }
    else
    {
        printf("Element at position %d from top = %d\n", pos, stack[top - pos + 1]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    peep(1);   // Top element
    peep(2);
    peep(3);
    peep(4);

    return 0;
}
