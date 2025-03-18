// WAP to find whether a number is Odd or Even without using a % operator.
#include <stdio.h>

int main() {
    int n;
    printf("Give a number: ");
    scanf("%d", &n);

    if (n & 1) {
        printf("The number %d is odd.\n", n);
    } else {
        printf("The number %d is even.\n", n);
    }

    return 0;
}
