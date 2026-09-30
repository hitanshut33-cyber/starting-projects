#include <stdio.h>

int main() {
    float rad,pi;
    pi = 3.14;
    printf("Enter the radius of the circle :");
    scanf("%f",&rad);
    printf("Area of the circle is : %f", pi*rad*rad);
    return 0;
}