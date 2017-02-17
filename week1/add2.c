#include<stdio.h>
int sum(int a,int b)
{
int s;
s=a+b;
return s;
}
int main()
{
int c,d,e;
printf("Enter two numbers:");
scanf("%d%d",&c,&d);
e=sum(c,d);
printf("The sum of %d and %d is %d",c,d,e);
return 0;
}
