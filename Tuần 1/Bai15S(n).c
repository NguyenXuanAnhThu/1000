#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    float s=0,p=0;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        p = p + i; //p là mẫu số
        s = s + 1/(p);
    printf("Tong S(%d) la = %0.1f",n,s);
}

