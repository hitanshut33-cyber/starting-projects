#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    printf("Enter value of A:");
    scanf("%d",&a);
    printf("\n Enter value of B:");
    scanf("%d",&b);
    printf("\n Enter value of C:");
    scanf("%d",&c);
    printf("\n Enter value of D:");
    scanf("%d",&d);
    printf("\n Enter value of E:");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    printf("\n Sum of 5 digits is :%d", sum);
    return 0;
}