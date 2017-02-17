#include <stdio.h>
void main()
{
    int i=0,n,k;
    printf ("Nhap n: ");
    scanf("%d",&n);
    while (n!=0)
            {
                k=n%10;
                n=n/10;
                i++;
            }
    printf ("so chu so la %d ",i);


}
bai43 trùng với bài 79
