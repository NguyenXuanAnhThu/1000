#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    float x,s=0;
    printf("nhap x:");
    scanf("%f",&x);
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=pow(-1,i)*pow(x,2*i);
    printf("S(%d) = %f",n,s);
}

