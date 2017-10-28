#include<stdio.h>
int n;
void create(int a[])
{
	int i;
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
}
void insert(int a[],int key,int pos)
{
	int i;
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=key;
	n++;
}
void del(int a[],int pos)
{
	int i;
	for(i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void disp(int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{	
	int s,ch,p,k,f=0;
	printf("\nEnter the size of the array:");
	scanf("%d",&s);
	int a[s];
	do{	printf("\tMenu of operations\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit"); 
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:	printf("\nEnter the number of elements to be entered initially:");
			scanf("%d",&n);
			printf("\nEnter the array");
			create(a);
			f=1;
			break;
 		case 2:if(f==0)
			{	printf("\nArray is not created");
				continue;
			}
			printf("\nEnter the position:");
			scanf("%d",&p);
			printf("\nEnter the element to be entered:");
			scanf("%d",&k);
			insert(a,k,p);
			break;
		case 3:if(f==0)
			{	printf("\nArray is not created");
				continue;
			}	
			printf("\nEnter the position of the element to be deleted:");
			scanf("%d",&p);
			del(a,p);
			break;
		case 4:if(f==0)
			{	printf("\nArray is not created");
				continue;
			}
			disp(a);
			break;
		case 5:return 1;
		default:printf("\nInvalid option");
		}
	}while(1);
		
	return 0;
}
