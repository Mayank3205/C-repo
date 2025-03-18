#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0,k,j;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    j=n;
    while (n != 0) {
        n /= 10;
        count++;
    }
    n=j;
    printf("The length of the number is: %d\n", count);
    while(n!=0){
        k = n%10;
        sum+=pow(k,count);
        n/=10;
    }
    if (sum==j)
        printf("It's armstrong number");
    else
        printf("It's not armstrong number");
    return 0;
}