#include<stdio.h>
#include<stdlib.h>
struct dll
{
	char ssn[10];
	char name[15];
	char dept[15];
	char desig[15];
	float sal;
	int phno;
	struct dll *rlink,*llink;
};
typedef struct dll *node;
node start=NULL;
node create()
{
	node new=(node)malloc(sizeof(struct dll));
	printf("Enter the ssn:");
	scanf("%s",new->ssn);
	printf("\nEnter name:");
	scanf("%s",new->name);
	printf("\nEnter the dept. :");	
	scanf("%s",new->dept);	
	printf("\nEnter designation");
	scanf("%s",new->desig);
	printf("\nEnter the salary:");	
	scanf("%f",&new->sal);
	printf("\nEnter phone number:");
	scanf("%d",&new->phno);
	new->rlink=NULL;
	new->llink=NULL;
}
void creat_n(int n)
{
node new,temp;
int i;
for(i=0;i<n;i++)
{	
	new=create();
	if(start==NULL)
	{
		start=new;
		temp=start;
	}
	else
	{
		temp->rlink=new;
		new->llink=temp;
		temp=new;
	}
}
}
void status()
{	
	node temp=start;
	int i=0;
	if(start=NULL)
	{
	printf("List is empty");
	}
	while(temp!=NULL)
	{
		printf("SSN:%s",temp->ssn);	
		printf("\nName:%s",temp->name);
		printf("\nDept.:%s",temp->dept);		
		printf("\nDesignation:%s",temp->desig);	
		printf("\nSalary:%f",temp->sal);
		printf("\nPhone no.:%d",temp->phno);
		temp=temp->rlink;
		i++;
	}
	printf("\nThe number of nodes are:%d",i);
}
void inserte()
{
	node new=create();
	if(start==NULL)
	{	
		start=new;
		return;
	}
	node temp=start;
	while(temp->rlink!=NULL)
	{
		temp=temp->rlink;
	}
	temp->rlink=new;
	new->llink=temp;
}
void dele()
{	
	node temp=start;
	if(start==NULL)
	{
		printf("The list is empty");
		
	}
	else if(temp->rlink==NULL)
	{
		free(temp);
		start=NULL;	
		
	}
else{
	while(temp->rlink!=NULL)
	{	
		temp->rlink=temp;
	}
	temp->llink->rlink=NULL;free(temp);
}
	
}
void insertf()
{
	node new=create();
	if(start==NULL)
	{
		start=new;
		return;
	}
	new->rlink=start;
	start->llink=new;
	start=new;
}
void delf()
{	
	node temp;
	if(start==NULL)
	{
		printf("List is empty");
		return;	
	}
	else if(start->rlink==NULL)
	{
		free(start);
		start=NULL;
	}
else
{
	temp=start;
	start=start->rlink;
	free(temp);
	start->llink=NULL;
}
}
void dq()
{
	int ch;
	while(1)
	{
	printf("\n\tMenu\n1.Insertion at end\n2.Deletion at end\3.Insertion at front\n4.Deletion at front\n5.Exit");	
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)	
	{
	case 1:inserte();
		break;
	case 2:dele();	
		break;
	case 3:insertf();
		break; 
	case 4:delf();
		break;
	case 5:return;
	}
	}	
}
int main()
{
	int ch,n;
	while(1)
	{
		printf("\n\tMenu of operations\n1.Create list\n2.Status\n3.Insertion at end\n4.Deletion at end\n5.Insertion at front\n6.Deletion at front\n7.Exit\n8.Queue");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:printf("Enter the size:");
			scanf("%d",&n);
			creat_n(n);
			break;
		case 2:status();
			break;
		case 3:inserte();
			break;
		case 4:dele();
			break;	
		case 5:insertf();
			break;
		case 6:delf();
			break;
		case 7:return 0;
			break;
		case 8:dq();
			break;

		}
	}
return 0;
}

		
		
