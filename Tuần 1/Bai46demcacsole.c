#include <stdio.h>
void main()
{
    int i=0,n,k;
    printf ("Nhap n: ");
    scanf("%d",&n);
    while (n!=0)
            {
                if((n%10%2)!=0)
                    i++;
            n=n/10;
            }
    printf("so cac so le la %d",i);


}

