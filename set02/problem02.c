// Write a program to find if a triangle is scalene.
// > A triangle is scalene if all the three sides of the triangle are not equal to one another

#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int input_side()
{
    int n;
    printf("enter the side of triangle \n");
    scanf("%d",&n);
    return n;
}

int check_scalene(int a, int b, int c)
{
    int scalene;
    if(a!=b && b!=c && c!=a)
    {
        scalene= 1;
    }
    else
    {
        scalene= 0;
    }
    return scalene;
    
}

void output(int a, int b, int c, int isscalene)
{
    if(isscalene==1)
    {
        printf("the trinagle is scalene");
    }
    else{
        printf("the triangle is not  scalene");
    }
}

int main()
{
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}