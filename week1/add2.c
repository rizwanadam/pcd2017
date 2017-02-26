#include<stdio.h>
int add2(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int main()
{
	int b,c,s;
	printf("Enter the two numbers to be added:");
	scanf("%d%d",&b,&c);
	s=add2(b,c);
	printf("The sum is:%d",s);
	return(0);
}