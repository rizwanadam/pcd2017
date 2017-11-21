#include<stdio.h>
#define m 20
int q[m];
int f=0,r=-1,n;
int g[m][m];
void create(int n)
{
	printf("Enter the adjacent matrix:");
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);
		}
	}
}
void bsf(int u,int n)
{
	int s[10]={0},i,j;
	printf("%d ",u);
	q[++r]=u;
	s[u]=1;
	while(f<=r)
	{
		u=q[f++];
		for(i=0;i<n;i++)
		{
			if(g[u][i]==1&&s[i]==0)
			{
				q[++r]=i;
				printf("%d ",i);
				s[i]=1;
			}
		}
	}
}
int s[10]={0};
void dsf(int u,int n)
{
	int i;
	printf("%d ",u);
	s[u]=1;
	for(i=0;i<n;i++)
	{
		if(g[u][i]==1&&s[i]==0)
		{
			dsf(i,n);
		}
	}
}
int main()
{
	int ch,n,v;
	while(1)
	{
		printf("\t\nMenu\n1.Create\n2.Dsf\n3.Bsf\n4.Exit");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the number of cities:");
					scanf("%d",&n);
					create(n);
					break;
			case 2:printf("The intital vertex:");
					scanf("%d",&v);
					dsf(v,n);
					break;
			case 3:printf("The intital vertex:");
					scanf("%d",&v);
					bsf(v,n);
					break;
			case 4:return 0;
		}
	}
}
