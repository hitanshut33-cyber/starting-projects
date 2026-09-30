#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age < 18)
    {
        printf("your age is not valid for driving license");
    }
    else
    {
        printf("your age is valid for driving license");
        
    }
}