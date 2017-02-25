#include<stdio.h>
int addn(int A[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
{
sum+=A[i];
}
return sum;
}
int main()
{
int B[100],m,s;
printf("Enter the number of numbers to be added");
scanf("%d",&m);
printf("Enter %d numbers:",m);
for(int i=0;i<m;i++)
{
scanf("%d",&B[i]);
}
s=addn(B,m);
printf("The sum of %d numbers is %d",m,s);
return 0;
}

