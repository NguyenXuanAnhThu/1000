#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n,t=1,x;
    printf("nhap n:");
    scanf("%d",&n);
    printf("nhap x:");
    scanf("%d",&x);
    t=pow(x,n);
    printf("Tich T(%d) la = %d",n,t);
}


