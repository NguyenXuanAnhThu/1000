#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int x,i,n,s=0;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=pow(x,i);
    printf("Tong S(%d) la = %d",n,s);
}

