#include<stdio.h>
int addn(int A[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
{
sum+=A[i];
}
printf("The sum of %d numbers is %d",n,sum);
}
int main()
{
int B[100],m;
printf("Enter the number of numbers to be added");
scanf("%d",&m);
printf("Enter %d numbers:",m);
for(int i=0;i<m;i++)
{
scanf("%d",&B[i]);
}
addn(B,m);
return 0;
}

