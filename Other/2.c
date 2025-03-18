//2 WAP to find whether string is palindrome or not.
#include <stdio.h>
#include <string.h>
int main(){
    int n,i,j;
    char str[100],str1 [100];
    printf("Enter the string: ");
    gets(str);
    printf("The entered string is: %s\n",str);
    n=strlen(str);
    for(i=n-1,j=0;i>=0;i--,j++){
        str1[j]=str[i];
    }
    str1[n]='\0';
    if(strcmp(str,str1)==0){
        printf("The string is palindrome\n");
    }
    else{
        printf("The string is not palindrome\n");
    }
    for()
}
