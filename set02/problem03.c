// Write a program find whether a number is a composite number
// > A Composite number has more than 2 factors.

#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    return n;
}

int is_composite(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}

void output(int n, int result)
{
    if(result==1)
    {
        printf("It is a composite number");
    }
    else
    {
        printf("It is not a composite number");
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
