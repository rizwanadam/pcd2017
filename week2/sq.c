#include<stdio.h> 
#include<math.h>
float cal_sq(float n) 
{
	return sqrt(n);
}
int main() 
{
	float num;
	printf("Enter the number whose square root is to found:");
	scanf("%f",&num);
	num=cal_sq(num);
	printf("The square root is:%f",num);
	return 0;
}
