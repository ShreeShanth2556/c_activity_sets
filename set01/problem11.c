//Write a C program to find the sum of 2 complex numbers
#include<stdio.h>

struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;


Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main()
{
    Complex a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}
Complex input_complex()
{
    Complex x;
    printf("enter the real and imaginary part\n");
    scanf("%f %f",&x.real,&x.imaginary);
    return x;
}
Complex add_complex(Complex a,Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a,Complex b,Complex sum)
{
    printf("Sum of (%.2f + %.2fi) and (%.2f + %.2fi) is: %.2f + %.2fi\n", 
           a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}