#include<stdio.h>
#include<stdlib.h>
struct student
{
char usn[12];
char name[15];
char branch[20];
char sem[10];
char phno[12];
struct student *link;
};
typedef struct student *node;
node start=NULL;
node create()
{
	node new;
	new=(node)malloc(sizeof(struct student));
	printf("\nEnter USN:");
	scanf("%s",new->usn);
	printf("\nEnter the name:");
	scanf("%s",new->name);
	printf("\nEnter branch:");
	scanf("%s",new->branch);
	printf("\nEnter sem:");
	scanf("%s",new->sem);
	printf("\nEnter phone no.:");
	scanf("%s",new->phno);
	new->link=NULL;
}
void create_n(int n)
{
	int i;
	node new;
	for(i=0;i<n;i++)	
	{	
		new=create();
		if(start==NULL)
		{
			start=new;
		}
		else
		{
			new->link=start;
			start=new;
		}
	}

}
void status()
{	
	int i=1;
	node temp;
	temp=start;
	if(temp==NULL)
	{
		printf("The list is empty");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("Student %d",i);
			printf("\nUSN:%s",temp->usn);	
			printf("\nName:%s",temp->name);
			printf("\nBranch:%s",temp->branch);
			printf("\nSemester:%s",temp->sem);
			printf("\nPhone no.:%s",temp->phno);
			i++;
			temp=temp->link;
		}
	}
	printf("\nThe number of nodes are %d",i-1);
}
void iatfront()
{
	node new;
	new=(node)malloc(sizeof(struct student));
	new=create();
	new->link=NULL;
	if(start==NULL)
	{
		start=new;
		return;
	}
	else
	{
		new->link=start;
		start=new;
	}	
}
void iatend()
{
	node new,temp;
	new=create();
	new->link=NULL;
	if(start==NULL)
	{
		start=new;
		return;
	}
	else
	{
	temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=new;
	}
}
void delfront()
{
	node temp;
	temp=start;
	if(temp==NULL)
	{
	printf("The list is empty");

	}
	else if(temp->link==NULL)
	{
		free(temp);
		start=NULL;
	}
	else{
	start=temp->link;
	free(temp);
}	
}
void delatend()
{
	node temp,prev=NULL;
	if(start==NULL)
	{
		printf("List empty");
		return;
	}
	if(start->link==NULL)
	{
		free(start);
		start=NULL;
		return;
	}
	temp=start;
	while(temp->link!=NULL)
	{
		prev=temp;
		temp=temp->link;
	}
	prev->link=NULL;
	free(temp);
}
int main()
{
int ch,n;
while(1)
{
	printf("\n\tMenu of operations\n1.Create list\n2.Status\n3.Insertion at end\n4.Deletion at end\n5.Insertion at front\n6.Deletion at front\n7.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("Enter size of list:");
		int n;
		scanf("%d",&n);
		create_n(n);	
		break;
	case 2:status();
		break;
	case 3:iatend();
		break;
	case 4:delatend();
		break;
	case 5:iatfront();
		break;
	case 6:delfront();
		break;
	case 7:return 1;
	}
}
return 0;
}
	


			
		



