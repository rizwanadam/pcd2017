#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct term
{
	int cf;
	int px;
	int py;
	int pz;
	int flag;
	struct term *link;
};

typedef struct term *node;
node create()
{
	node new;
	new=(node)malloc(sizeof(struct term));
	new->link=new;
	return new;
}
node head=NULL;
node insert_rear(int cof,int pox,int poy,int poz)
{
	node new,temp;
	new=create();
	new->cf=cof;
	new->px=pox;		
	new->py=poy;
	new->pz=poz;
	temp=head->link;
	while(temp->link!=head)
	{
		temp=temp->link;
	}
	temp->link=new;
	new->link=head;
	return head;
}
node readp()
{		
	node t=create();
	int cf,px,py,pz;
	for(;;)
	{
		printf("Enter the coefficent:");
		scanf("%d",&cf);
		if(cf==0)
			break;
		printf("Power of x,y and z");
		scanf("%d%d%d",&px,&py,&pz);
		t=insert_rear(cf,px,py,pz);
	}
	return t;
}

void display()
{
	node temp;
	if(head->link==head)
	{
	printf("Empty");
	return;
	}
	temp=head->link;
	while(temp!=head)
	{
		if(temp->link=head)
		{
			printf("%dx^%dy^%dz^%d",temp->cf,temp->px,temp->py,temp->pz);
			break;
		}
		printf("%dx^%dy^%dz^%d+",temp->cf,temp->px,temp->py,temp->pz);
		temp=temp->link;
	}
}
void eval(node temp)
{	
	int x,y,z;
	float sum=0;
	printf("Enter x ,y and z:");
	scanf("%d%d%d",&x,&y,&z);
	temp=head->link;
	while(temp!=head)
	{
		sum+=temp->cf*pow(x,temp->px)*pow(y,temp->py)*pow(z,temp->pz);
		temp=temp->link;
	}
	printf("Sum=%f",sum);
}
node add(node head1,node head2)	
{	node head3=create();
	node temp1,temp2;
	int px1,py1,pz1,px2,py2,pz2,cf1,cf2,cf;
	temp1=head1->link;
	while(temp1!=head1)
	{
		px1=temp1->px;
		py1=temp1->py;
		pz1=temp1->pz;
		cf1=temp1->cf;
		temp2=head2->link;
		while(temp2!=head2)
		{
			px2=temp2->px;
			py2=temp2->py;
			pz2=temp2->pz;
			cf2=temp2->cf;
			if(px1==px2&&py1==py2&&pz1==pz2)
			{
				break;		
			}
			temp2=temp2->link;
		}	
		if(temp2!=head2)
		{
			cf=cf1+cf2;
			if(cf!=0)
			{
				head3=insert_rear(cf,px1,py1,pz1);
				temp2->flag=1;
			}}
			else 
			{
			head3=insert_rear(cf1,px1,py1,pz1);
			}
			temp1=temp1->link;
		}
		
		temp2=head2->link;
		while(temp2!=head2)
		{
			if(temp2->flag==0)	
			{
				head3=insert_rear(cf2,px2,py2,pz2);
			}
			temp2=temp2->link;

		}
	return head3;
}
int main()
{	
	head=create();
	node head1,head2,head3,t1;
	int ch;
	while(1)
{
	printf("\n\tMENU\n1.Evaluation\n2.Addition\n3.Display4.Exit:");
	printf("\nEnter your choice:");	
	scanf("%d",&ch);	
	switch(ch)
	{
	case 1:t1=readp();
		display();
		eval(t1);
		break;
	case 2:head1=readp();
		head2=readp();
		head3=add(head1,head2);
	case 3:display();
		break;
	case 4:return 0;
}
}
return 0;
}

	
		
		
			













	
	
