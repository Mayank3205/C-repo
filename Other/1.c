// WAP to find a sum of even number into 1D array.
#include<stdio.h>
#include <stdlib.h>

int main() {
    int i,n,*p,sum = 0;
    printf("How big is the array");
    scanf("%d",&n);

    p= (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    for(i=0;i<n;i++) {
        if(p[i]%2==0) {
            sum += p[i];
        }
    }

    printf("%d",sum);
    free(p);
}
