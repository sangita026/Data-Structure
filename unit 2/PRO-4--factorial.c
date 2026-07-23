#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;


void push(int value)
{
    stack[++top] = value;
}


int pop()
{
    return stack[top--];
}

int main()
{
    int n, fact = 1, i;

    printf("Enter a number: ");
    scanf("%d", &n);


    for(i = 1; i <= n; i++)
    {
        push(i);
    }


    while(top != -1)
    {
        fact = fact * pop();
    }

    printf("Factorial of %d = %d\n", n, fact);

    return 0;
}
