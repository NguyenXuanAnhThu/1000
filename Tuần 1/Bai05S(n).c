#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    float s=0;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        s+=1/(float)(2*i+1);
    printf("Tong S(%d) la = %0.2f",n,s);
}

