#include<stdio.h>
float eval(int a[],int x,int n)
{
int i;
float sum=0;
for(i=n;i>0;i--)
{
sum=(sum+a[i])*x;
}
sum+=a[0];
return sum;
}
int main()
{
float e;
int or,x,i;
printf("Enter the order:");
scanf("%d",&or);
printf("Enter the value of x:");
scanf("%d",&x);
int b[or+1];
printf("Enter %d constants:",or+1);
for(i=0;i<or+1;i++)
{
scanf("%d",&b[i]);
}
e=eval(b,x,or);
printf("The evaluated value is=%f",e);
return 0;
}


