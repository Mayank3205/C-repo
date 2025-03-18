// 3 WAP to find a Factor of a given number (iterative and recursive)
#include <stdio.h>
int fact(int n){
    if(0==n)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int n,facto=1;
    printf("Give a number: ");
    scanf("%d",&n);

    
    // for(int i=1;i<=n;i++){
    //     fact*=i;
    // }

    facto=fact(n);

    printf("The factorial of %d is %d\n",n,facto);
}

