#include<stdio.h>
#include<conio.h>
struct complex
{
float real;
float imag;
};
struct complex add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
return c;
}
int main()
{
struct complex f,g,h;
printf("Enter the real and imaginary part of 1st complex no.:");
scanf("%f%f",&f.real,&f.imag);
printf("Enter the real and imaginary part of 2nd complex no.:");
scanf("%f%f",&g.real,&g.imag);
h=add(f,g);
printf("Its sum is %f+%fi",h.real,h.imag);
return (0);
getch();
}
