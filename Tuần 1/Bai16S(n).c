#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,n,x;
    float s=0,p=0;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        p += i; //p là mẫu số
        s += pow(x,i)/(p);
    printf("Tong S(%d) la = %0.1f",n,s);
}


