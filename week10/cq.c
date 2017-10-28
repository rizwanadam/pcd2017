#include<stdio.h>
char cq[5];
int f=-1,r=-1;
void insert(char i)
{
	if((r==4&&f==0)||f==r+1)
	{	
		printf("Overflow");
		return;
	}
	else
	{
	r=(r+1)%5;
	cq[r]=i;
	if(f==-1)
		f=0;
	}
}
void del()
{
	char d;
	if((f==-1)&&(r==-1))
	{
		printf("Underflow");
		return;
	}
	else if(f==r)
	{
		d=cq[f];
		f=(f+1)%5;
		printf("Underflow");
	}
	else
	{
		d=cq[f];
		f=(f+1)%5;
		printf("The deleted element is %c",d);
	}
}
void display()
{	
int i;
for(i=f;i!=r;i=(i+1)%5)
{
	printf(" %c ",cq[i]);
}
	printf(" %c",cq[i]);

}
int main()
{
	int ch;
	do
	{
	printf("\n\tMenu of operation\n1.Insert\n2.Delete\n3.Display\n4.Exit");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("\nEnter the element to be inserted:");
	       char in;
		scanf(" %c",&in);
		insert(in);
		break;
	case 2:del();
		break;
	case 3:display();
		break;
	case 4:return 0;
	}
	}while(1);
	return 0;
}


































