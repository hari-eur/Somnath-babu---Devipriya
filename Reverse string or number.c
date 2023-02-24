#include <stdio.h>
#include <string.h>
int main() {
    char a[50],b[50];
    int l,i,j=0;
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("%s",b);

    return 0;
}