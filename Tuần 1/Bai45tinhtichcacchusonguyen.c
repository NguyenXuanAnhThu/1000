#include <stdio.h>
void main()
{
    int i=0,n,k,t=1;
    printf ("Nhap n: ");
    scanf("%d",&n);
    while (n!=0)
            {
                k=n%10;
                t*=k;
                n=n/10;
                i++;
            }
    printf ("tong cac chu so la %d ",t);


}
