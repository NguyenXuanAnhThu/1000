#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,t=1;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        t*=i;
    printf("Tich T(%d) la = %d",n,t);
}

