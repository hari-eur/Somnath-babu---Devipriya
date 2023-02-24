#include <stdio.h>
int main() {
    char a[5];
    int i,j,b[5];
    for(i=0;i<5;i++)
    {
        scanf("%c",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<4;i++)
    {
        if(b[i]>b[i+1])
        {
            j=b[i];
            b[i]=b[i+1];
            b[i+1]=j;
        }
    }
    printf("%d",b[4]);
    return 0;
}