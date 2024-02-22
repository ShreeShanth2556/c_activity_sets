// Write a program find whether a number is a composite number
// > A Composite number has more than 2 factors.

#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

input_number()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    return n;
}

int is_composite(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return i;
    }
    return 0;
}

void output(int n, int result)
{
    if(result==1)
    {
        printf("the number is composite");
    }
    else
    {
        printf("the number is not composite");
    }
}

int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}
