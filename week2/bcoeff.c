#include<stdio.h>
long long int fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
int main()
{
	long long int c;
	int n,r;
	printf("Enter the number of objects and sample in nCr:");
	scanf("%d%d",&n,&r);
	c=fact(n)/(fact(n-r)*fact(r));
	printf("The binomial coefficient is:%lld",c);
	return 0;
}