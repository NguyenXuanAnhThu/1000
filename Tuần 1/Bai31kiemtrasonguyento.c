#include <stdio.h>
#include <conio.h>
void main()
{

    int a,i,dem=0;
    printf("nhap so a\n");
    scanf("%d",&a);
    if (a<2)
        {
            printf("a khong phai la so nguyen to\n");
        }
    else if (a==2)
    {
        printf("a=2 la mot so nguyen to\n");

    }
    else
        for (i=2;i<a;i++)
        if (a%i==0)
            dem++;
            if (dem==0)
                printf("a=%d la mot so nguyen to\n",a);
            else
                printf("a=%d khong phai la mot so nguyen to\n",a);
    getch();
}
