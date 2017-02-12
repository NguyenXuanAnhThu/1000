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
    for(i=0;i<=n;i++)
       gt*=(2*i);
       s+=(pow(x,(2*i)))/gt;
    printf("Tong S(%d) la = %0.1f",n,s);
}


