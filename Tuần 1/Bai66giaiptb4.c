#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a,b,c,d,t1,t2,x1,x2,x3,x4;
    printf("phuong trinh bac 4 co dang: a.x^4+b.x^2+c=0\n");
    printf("nhap a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-(4*a*c);
    if (d<0)
    {
        printf("phuong trinh da cho vo nghiem1!\n");
    }
    else
    {
        if (d==0)
           {

            t1=-b/2*a;
            t2=t1;
            if (t1<0 && t2<0)
            {
                printf("phuong trinh da cho vo nghiem2!\n");
            }
            else
            {
                if (t1>=0)
            {
                x1=+sqrt(t1);
                x2=-x1;
                printf("phuong trinh da cho co hai nghiem x1=%0.1f, x2=%0.1f\n",x1,x2);
            }
              else if(t2>=0)
               {
                x3=+sqrt(t2);
                x4=-x3;
                printf("phuong trinh da cho co bon nghiem x3=%0.1f, x4=%0.1f\n",x3,x4);
               }
            }
           }
         else if (d>0)
         {
             t1=(-b+sqrt(d))/2*a;
             t2=(-b-sqrt(d))/2*a;
             if (t1<0 && t2<0)
             {
                 printf("phuong trinh da cho vo nghiem 3!\n");
             }
             else if (t1>=0)
             {
                 x1=+sqrt(t1);
                 x2=-x1;
                 printf("phuong trinh da cho co hai nghiem x1=%0.1f, x2=%0.1f\n",x1,x2);
             }
             else if (t2>=0);
             {
                 x3=+sqrt(t2);
                 x4=-x3;
                 printf("phuong trinh da cho co hai nghiem x3=%0.1f, x4=%0.1f\n",x3,x4);
             }
         }

    }
    return 0;
}
