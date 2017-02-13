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
    for(i=0;i<=n;i++)
        gt*=(2*i);
        s+=pow(-1,i+1)*(pow(x,2*i)/gt);
    printf("S(%d) = %f",n,s);
}


