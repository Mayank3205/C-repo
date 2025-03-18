#include <stdio.h>

void factor(int n,int i){
    if (i>n)
        return;
    if (n % i == 0){
        printf("%d\n",i);
    }
    factor(n,i+1);
}
int main(){
    int n,i;
    printf("Give a number: ");
    scanf("%d",&n);

    printf("The factor of %d are: \n",n);
    factor(n, 1);

    // for(i=1;i<=n;i++){
    //     if(n%i==0){
    //         printf("%d \n",i);
    //     }
    // }

    for(
    return 0;
}