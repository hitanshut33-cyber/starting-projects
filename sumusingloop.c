#include <stdio.h>
int main ()
{
    long int val,sum=0, tmp;
    printf("Enter a value:");
    scanf("%d",&val);
    do 
    {
        tmp=val%10;
        sum=sum+tmp;
        val=val/10;
    }
    while(val!=0);
    printf("Sum of digits = %d",sum);
    return 0;
}