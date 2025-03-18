// 10 WAP to find a prime number between range (range should be entered by user).
#include <stdio.h>

int main(){
    int start,end,i;
    printf("Enter the start and the end ");
    scanf("%d%d",&start,&end);
    printf("This are the prime number:\n");
    while (end >= start){
        int flag=1;
        for(i=2;i<start;i++){
            if(start%i==0){                
                flag=0;
                break;
            }
        }
        if(flag)
            printf("%d\n",start);
        start++;
    }
    return 0;
}