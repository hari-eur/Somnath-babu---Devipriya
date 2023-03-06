#include <stdio.h>
int main() {
    int a,i,n;
    printf("Enter number of rows to be printed: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
         a=1;
        else
         a=a*11;
        printf("%d",a);
        printf("\n");
    }
    return 0;
}