#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
struct complex addc(struct complex B[],int m)
{
int i;
struct complex C;
for(i=0;i<m;i++)
{
C.real+=B[i].real;
C.imaginary+=B[i].imaginary;
}
return C;
}
int main()
{
int n,i;
struct complex A[100],D;
printf("Enter the number of complex numbers to be added");
scanf("%d",&n);
printf("Enter the real and imaginary part of %d complex numbers:",n);
for(i=0;i<n;i++)
{
scanf("%f",&A[i].real);
scanf("%f",&A[i].imaginary);
}
D=addc(A,n);
printf("The sum of %d complex numbers is:%f+%fi",n,D.real,D.imaginary);
return 0;
}




