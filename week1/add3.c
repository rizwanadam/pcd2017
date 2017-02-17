#include<stdio.h>
int sum(int a,int b,int f)
{
int s;
s=a+b+f;
return s;
}
int main()
{
int c,d,e,g;
printf("Enter three numbers:");
scanf("%d%d%d",&c,&d,&e);
g=sum(c,d,e);
printf("The sum of %d,%d and %d is %d",c,d,e,g);
return 0;
}

