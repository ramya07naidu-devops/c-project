#include <stdio.h>

void factorial() {
    int n, i;
    int fact = 1;

    printf("\n\nEnter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
        return;
    }

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n\n", n, fact);
}
