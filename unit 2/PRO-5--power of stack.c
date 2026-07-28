#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
    }
}

// Pop function
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return 0;
    } else {
        return stack[top--];
    }
}

int main() {
    int base, exponent, i, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Push the base into the stack exponent times
    for (i = 0; i < exponent; i++) {
        push(base);
    }

    // Pop and multiply to calculate power
    while (top != -1) {
        result = result * pop();
    }

    printf("%d ^ %d = %d\n", base, exponent, result);

    return 0;
}
