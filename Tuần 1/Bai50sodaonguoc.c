#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Nhap so co 3 chu so: ");
    scanf("%d",&a);
    printf("so dao nguoc: %d%d%d",a%10,a/10%10,a/100);
}
