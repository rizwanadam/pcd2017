#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i;
	int c=0;
	if(n%2==0)
	{
		if(n==2)
		{
			return 1;
		}
		return 0;
	}
	else
	{
		for(i=1;i<sqrt(n);i++)
		if(n%i==0)
		{
			c++;
		}
	}
	if(c>1)
	return 0;
	else 
	return 1;
}
int main()
{
	int s;
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	s=is_prime(num);
	if(s==0)
	printf("The number is not a prime\n");
	else 
	printf("The number is a prime\n");
	return 0;
}