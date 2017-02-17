#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
void addc(struct complex B[],int m)
{
struct complex C;
for(int i=0;i<m;i++)
{
C.real+=B[i].real;
C.imaginary+=B[i].imaginary;
}
printf("The sum of %d complex numbers is:%f+%fi",m,C.real,C.imaginary);
}
int main()
{
int n;
struct complex A[100];
printf("Enter the number of complex numbers to be added");
scanf("%d",&n);
printf("Enter the real and imaginary part of %d complex numbers:",n);
for(int i=0;i<n;i++)
{
scanf("%f",&A[i].real);
scanf("%f",&A[i].imaginary);
}
addc(A,n);
return 0;
}




