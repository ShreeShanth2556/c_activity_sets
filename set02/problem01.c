//Write a program to find the area of a triangle.

#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void input(float *base, float *height)
{
    printf("Enter the base and height of a triangle \n");
    scanf("%f %f",base,height);
}

void find_area(float base , float height, float *area)
{
    *area = 0.5*(base * height);
}

void output(float base, float height, float area)
{
    printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}

int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}