#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    float s=0;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=i/(float)(i+1);
    printf("Tong S(%d) la = %0.2f",n,s);
}

