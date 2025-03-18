#include <stdio.h>
#include <math.h>
int main(){
    int i,j,k=0,row=5;
    for(i=row;i>=0;i--){
        for(k=0;k<(row-i);k++){
            printf(" ");
        }
        for(j=0;j<(i*2)+1;j++){
            printf("*");
        }
        printf("\n");
    }   
}