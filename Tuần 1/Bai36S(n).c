#include <stdio.h>
#include <math.h>
void main()
{
     int i,n,gt=1;
     float s;
     printf("Nhap n: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
        gt*=i;
        s=sqrt(gt+sqrt((float)0));
     printf("Tong S(%d) = %f",n,s);
}

