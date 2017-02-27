#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
struct complex getcomplex()
{
struct complex c;
printf("Enter the real and imaginary part of complex number:\n");
scanf("%f%f",&c.real,&c.imaginary);
return c;
}
struct complex add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.imaginary=a.imaginary+b.imaginary;
return c;
}
void printcomplex(struct complex c)
{
printf("\nThe sum of complex numbers is %f +i%f",c.real,c.imaginary);
}
int main()
{
struct complex x,y,z;
x=getcomplex();
y=getcomplex();
z=add(x,y);
printcomplex(z);
return 0;
}


