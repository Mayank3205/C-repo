#include <stdio.h>

int fib(int n){
    if(n<2){
        return n;
    }

    else
    {
        return fib(n-1)+ fib(n-2);
    }
}
int main(){
    int i,f,n,j,a=0,b=1,c;
    printf("Give a number: ");
    scanf("%d",&n);
    // for(i=0;i<n-1;i++){
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }
    c = fib(n);
    printf("The %dth fibonacci number is %d\n",n,c);
    return 0;
}