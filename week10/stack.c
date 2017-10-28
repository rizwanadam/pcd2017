#include<stdio.h>
#define m 5
int s[m-1],top=-1;
int pop()
{	
	int d;
	if (top==-1)
	{
		printf("Underflow");
	}
	else
	{
		d=s[top];
		top=top-1;
	}
	return d;
}
void push(int a)
{
	if(top==m-1)
	{
		printf("Overflow");
	}
	else
	{
	top=top+1;
	s[top]=a;
	}
}
int palin()
{	
	int n,i,f;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		push(a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]==pop())
	f=1;
	else
	{	
		f=0;
		break;
	}
	}
	return f;
}
void display()
{
	int i;
	for(i=top;i>-1;i--)
	{
		printf("%d ",s[i]);
	}
}
int status()
{	
	int r=top;
	return r;
}
int main()
{
int ch,f;
while(1)
{	printf("\n\tMENU\n1.Push\n2.Pop\n3.Palindrome\n4.Display\n5.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("Enter the element to be entered:");
		int e;
		scanf("%d",&e);
		push(e);
		break;
	case 2:printf("The popped element is :");
		int d;
		d=pop();
		printf("%d",d);
		break;
	case 3:f=palin();
		if(f==0)
		printf("The entered array is not a palindrome");
		else
		printf("The entered array is a palindrome");
		break;
	case 4:display();
		break;
	case 5:printf("Status");
		int s=status();
	case 6:return 0;
	default:printf("The entered choice is invalid");
	}
}
}

