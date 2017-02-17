#include <stdio.h>
void main()
{
    int i=0,n,k,s=0;
    printf ("Nhap n: ");
    scanf("%d",&n);
    while (n!=0)
            {
                if((n%2)==0)
                    {
                    s+=(n%10);
                    }
            n=n/10;
            }
    printf("tong la %d",s);


}

