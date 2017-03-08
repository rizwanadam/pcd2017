#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
struct complex *getcomplex(int m)
{
int i;
struct complex c[50];
printf("Enter the real and imaginary part of %d complex numbers:\n",m);
for(i=0;i<m;i++)
{
scanf("%f%f",&c[i].real,&c[i].imaginary);
}
add(c,m);
}
struct complex add(struct complex f[],int l)
{
int j;
struct complex c;
for(j=0;j<l;j++)
{
c.real+=f[j].real;
c.imaginary+=f[j].imaginary;
return c;
}
void printcomplex(struct complex c)
{
printf("\nThe sum of complex numbers is %f +i%f",c.real,c.imaginary);
}
int main()
{
int n;
struct complex x;
printf("Enter the number of complex numbers to be added");
scanf("%d",&n);
x=getcomplex(n);
printcomplex(x);
return 0;
}


