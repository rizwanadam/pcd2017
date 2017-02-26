#include<stdio.h>
#include<math.h>
struct complex
{
	float real;
	float imaginary;
};
void compute_roots(float a,float b,float c,struct complex *r1,struct complex *r2);

int main()
{
	float a,b,c;
	printf("Enter values of a,b and c in the equation ax^2+bx+c:");
	scanf("%f%f%f",&a,&b,&c);
	struct complex r1,r2;
	compute_roots(a,b,c,&r1,&r2);
    printf("The roots of the equations are %f+%fi and %f+%fi",r1.real,r1.imaginary,r2.real,r2.imaginary);	
    return 0;
}

void compute_roots(float a,float b,float c,struct complex *r1,struct complex *r2)
{

	float d;
	d=b*b-4*a*c;
	if(d>0)
	{
		r1->real=(-b+sqrt(d))/(2*a);
		r2->real=(-b-sqrt(d))/(2*a);
		r1->imaginary=0;r2->imaginary=0;
	}
	else if(d==0)
	{
		r1->real=-b/(2*a);
		r2->real=-b/(2*a);
		r1->imaginary=0;r2->imaginary=0;
	}
	else
	{	
	    r1->real=-b/(2*a);
		r2->real=-b/(2*a);
		r1->imaginary=sqrt(-d)/(2*a);
		r2->imaginary=sqrt(-d)/(2*a);
	}	
}
