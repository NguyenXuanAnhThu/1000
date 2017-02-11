#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    float s=0;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=(2*i+1)/(float)(2*i+2);
    printf("Tong S(%d) la = %0.2f",n,s);
}

