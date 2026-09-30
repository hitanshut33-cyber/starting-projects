#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter value of A:");
    scanf("%d",&a);
    printf("\n Enter value of B:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("Value of A is maximum and value of B is minimum");
    }
    else
    {
        printf("Value of B is maximum and value of A is minimum");
    }
    return 0;
}