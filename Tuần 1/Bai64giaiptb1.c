#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a,b,c;
    float x;
    printf("phuong trinh bac 1 co dang ax+b=c\n");
    printf("nhap ba so a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a!=0)
    {
        x=(float)(c-b)/a;
        printf("phuong trinh co mot nghiem x=%0.1f",x);
    }
    else
    {
        if (b==c && c==0) printf("phuong trinh co vo so nghiem");
        else printf("phuong trinh vo nghiem");
    }
}
