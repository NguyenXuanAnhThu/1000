#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int i,n;
    float x,s=0;
    printf("Nhap x:");
    scanf("%f",&x);
    printf("nhap n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        s+= pow(x,2*i+1);
    printf("Tong S(%d) la = %0.1f",n,s);
    return 0;
}

