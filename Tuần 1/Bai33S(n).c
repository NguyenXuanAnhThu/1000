#include <stdio.h>
#include <math.h>
void main()
{
     int i,n;
     float s;
     printf("Nhap n: ");
     scanf("%d",&n);
     for(i=2;i<=n;i++)
        s=sqrt(2+sqrt((float)2));
     printf("Tong S(%d) = %f",n,s);
}
