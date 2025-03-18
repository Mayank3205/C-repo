#include <stdio.h>
#include <math.h>

int main(){
    int i,j,k,col=5,a=1;
    char c=65;

    for ( i = 1; i <= col; i++)
    {
        for (k = 0; k < col - i; k++) {
            printf(" ");
        }
        for (j=0; j<i ; j++){
            
            if(i%2!=0){
                printf("%d ",a++);
            }
            else{
                printf("%c ",c++);
            }
        }
        printf("\n");
    }
    
}