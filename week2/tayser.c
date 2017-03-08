#include<stdio.h>
#include<math.h>
float convert_radians(float degree)
{
float rad;
rad=3.14159*degree/180;
return rad;
}
float calculate_sine(float rad)
{
int i;
float c,sum=0,term,prev,diff;
term=rad;
sum=term;
diff=rad;
for(i=3;diff>0.0000001;i+=2)
{
prev=term;
term=(-term*rad*rad)/(i*(i-1));
diff=fabs(term-prev);
sum+=term;
}
return sum;
}
int main()
{
float d,c,s;
float e;
printf("Enter the degree for which the sine has to be found :");
scanf("%f",&d);
c=convert_radians(d);
e=calculate_sine(c);
printf("sin(%f)=%f",c,e);
s=sin(c);
printf("sin(%f)=%f",c,s);
return 0;
}

