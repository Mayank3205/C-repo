// WAP to enter an element at specific position into array. (Do not take a new array)
#include <stdio.h>
#include <string.h>
int main(){
    int i,n,j,k,temp,pos,ele;
    printf("How big is the array");
    scanf("%d",&n);

    int a[99];
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("which element you want to enter and where?");
    scanf("%d%d",&ele,&pos);
    
    pos-=1;
    for ( i = n-1; i > pos-1; i--)
    {
        temp = a[i];
        a[i+1] = a[i];
    }
    a[pos]=ele;
    for ( i = 0; i <n+1; i++)
    {
        printf("%d",a[i]);
    }
    
    
}