#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
struct complex addc(struct complex B[],int m)
{
int i;
struct complex c={0,0};
for(i=0;i<m;i++)
{
c.real+=B[i].real;
c.imaginary+=B[i].imaginary;}
return c;
}
struct complex getcomplex()
{
struct complex c;
printf("Enter real and imaginary parts");
scanf("%f%f",&c.real,&c.imaginary);
return c;
}
void printcomplex(struct complex c)
{
printf("The sum of the complex numbers is %f+i%f",c.real,c.imaginary);
}
int main()
{
int n,i;
struct complex A[100],D;
printf("Enter the number of complex numbers to be added");
scanf("%d",&n);
for(i=0;i<n;i++)
{
A[i]=getcomplex();
}
D=addc(A,n);
printcomplex(D);
return 0;
}




