#include <stdio.h>
void main()
{
    int i=0,n,k,t=1;
    printf ("Nhap n: ");
    scanf("%d",&n);
    while (n!=0)
            {
                if((n%2)!=0)
                    {
                        t*=(n%10);
                    };
            n=n/10;
            }
    printf("Tich cac so le la %d",t);


}
