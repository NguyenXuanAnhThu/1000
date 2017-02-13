#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,n,x,gt=1;
    float s=0;
    printf("nhap x: ");
    scanf("%d",&x);
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        gt*=i;
        s+=pow(-1,i)*(pow(x,i)/gt);
    printf("S(%d) = %f",n,s);
}

