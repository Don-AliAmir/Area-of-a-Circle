#include<stdio.h>
int main()
{
    int r;
    float area;
    const float PI=3.14;
    printf("enter value of r: ");
    scanf("%i",&r);
    area=PI*r*r;
    printf("area= %.3f", area);
    return 0;
}
