#include <stdio.h>

int summ(int);

int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    int temp,sum=0;
    temp=n;
    int ans = summ(n);


    printf("The answer is %d",ans);
    // while(n>0){
    //     sum+=n%10;
    //     n = n/10;
    // }
    // printf("The sum of digits of %d is %d\n",temp,sum);
}

int summ(int n){
    int sum=0;
    if(n<10){
        return n;
    }
    else{
        return n%10+summ(n/10);
    }
}