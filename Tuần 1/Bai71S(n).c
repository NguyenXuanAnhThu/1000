#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,n,x;
    float s=0,p=0;
    printf("Nhap x: ");
    scanf("%d",&x);
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        p+=i;
        s+=pow(-1,i)*(pow(x,i)/p);
    printf("S(%d) = %f",n,s);
}

