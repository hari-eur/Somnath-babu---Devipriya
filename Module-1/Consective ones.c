#include <stdio.h>
int main() 
{
    int a[10],b,r,i,n,j=0,temp,count=0;
    scanf("%d",&n);
    temp=n;
    for(i=0;n>0;i++)
    {
     a[i]=n%2;
     n=n/2;
     j++;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    if(count>=2)
    {
     b=temp+1;
    }
    else
    {
     b=temp-1;
    }
    printf("%d",b);
    return 0;
}