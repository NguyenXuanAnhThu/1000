#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,n;
    float x,s=0;
    printf("nhap x:");
    scanf("%f",&x);
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=pow(-1,i+1)*pow(x,i);
    printf("S(%d) = %f",n,s);
}
