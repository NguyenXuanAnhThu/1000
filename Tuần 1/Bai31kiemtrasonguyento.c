#include<stdio.h>
void main()
{
    int i,n;
    printf("nhap n= ");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Khong phai la so nguyen to");
        }
        if(n%i==1)
        {
            printf("la so nguyen to");
        }
    }

}
