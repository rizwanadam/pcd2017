#include<stdio.h>
int is_leap(int y)
{
return(y%400==0?1:y%100==0?0:y%4==0?2:-1);
}
int main()
{
int year,r;
printf("Enter the year:");
scanf("%d",&year);
r=is_leap(year);
switch(r)
{
case -1:printf("The year is not leap");
break;
case 0:printf("The year is a century year but not a leap year");
break;
case 1:printf("The year is a quadrennal as well as a leap year");
break;
case 2:printf("The year is leap");
break;
default:break;
}
return 0;
}
