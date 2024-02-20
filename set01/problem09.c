//Write a C program to find the [square root] of a number.
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n,sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float x;
    printf("Enter the number");
    scanf("%f",&x);
    return x;

}
float square_root( float n)
{
    float x,small=0.00001;
    x=n;
    while((x*x-n)>small) 
    {
        x=0.5*(x+(n/x));
    }
    return x;
}
void output(float n,float sqrroot)
{
    printf("The square root of %f is %f",n,sqrroot);
}