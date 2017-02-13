#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,n;
    float s=0,p=0;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        p+=i;
        s+=pow(-1,i+1)*(1/p);
    printf("S(%d) = %f",n,s);
}
