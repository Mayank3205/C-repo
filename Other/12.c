// 12 WAP to find Max, Min, Average of n numbers, n should be taken from user and all n valueshould
// be taken from user (Note that you are not allowed to use an array for this)

#include <stdio.h>

int main(){
    int min=9999,max=0,i,sum=0,n,ele;
    float avg;
    printf("What is n");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ele);
        if(min>ele)
            min=ele;
        
        if(max<ele)
            max=ele;
        
        sum+=ele;
    }
    avg=sum/5.00;
    printf("The min is %d \nThe max is %d\nThe avg is %f",min,max,avg);
}