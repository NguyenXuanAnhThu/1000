#include <stdio.h>
#include <conio.h>
void main()
{
    int n,s=0,i;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            s+=i;
    }
    if (s==n)
        printf("so %d la so hoan thien",n);
    else
        printf("so %d khong phai la so hoan thien",n);
}
