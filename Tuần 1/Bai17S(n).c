#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,n,s=0,x,gt=1;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       gt*=i;
       s+=(pow(x,i))/gt;
    printf("Tong S(%d) la = %0.1f",n,s);
}


