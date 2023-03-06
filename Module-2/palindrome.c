#include <stdio.h>
int main() {
    
    int a,r;
    scanf("%d",&a);
    int temp=a,temp1;
    while(temp!=0)
    {
        r=temp%10;
        temp1=temp1*10+r;
        temp/=10;
    }
    if(a== temp1)
     printf("The given number is palindrome.");
    else
     printf("The given number is not a palindrome.");
    return 0;
}