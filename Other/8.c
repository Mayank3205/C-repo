// WAP to find a total odd and total even digit of a given number.
#include <stdio.h>

int main(){
    int n;
    printf("Give a number: ");
    scanf("%d", &n);
    
    int temp, odd = 0, even = 0;
    while (n > 0) {
        temp = n % 10; // Get the last digit
        if (temp % 2 == 0)
            even++;
        else
            odd++;
        n = n / 10; // Remove the last digit
    }
    printf("There are total %d even digits and %d odd digits\n", even, odd);
    return 0;
}