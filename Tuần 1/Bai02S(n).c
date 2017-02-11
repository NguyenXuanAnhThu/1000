#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,s=0;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=i*i;
    printf("Tong S(%d) la = %d",n,s);
}

