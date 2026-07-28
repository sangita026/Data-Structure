
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("No common divisor exists.");
    } else {
        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                printf("Smallest Common Divisor = %d", i);
                break;
            }
        }
    }

    return 0;
}
