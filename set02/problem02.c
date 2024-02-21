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
    if(a==b || b==c || c==a)
    {
        scalene = 1;
    }
    else
    {
        scalene = 2;
    }
    return scalene;
}

void output(int a, int b, int c, int isscalene)
{
    if(isscalene==1)
    {
        printf("the trinagle is not scalene");
    }
    else{
        printf("the triangle is scalene");
    }
}
