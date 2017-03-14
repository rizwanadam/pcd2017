#include<stdio.h> 
#include<math.h>
float root(float n) 
{ 
float diff=n,prev; 
float x=10; 
while(diff>0.0001) 
{ 
prev=x; 
x=x-(x*x-n)/(2*x); 
diff=fabs(x-prev);
}
return x;
} 
int main() 
{ 
float num,r; 
printf("Enter the number"); 
scanf("%f",&num); 
r=root(num); 
printf("The root is %f",r); 
return 0;
}
