#include<stdio.h>
#include<string.h>
int bforce(char *str,char *pat,char *rp,int m,int n)
{
	int i,j,c=0;
	for(i=0;i<n;i++)
	{
		j=0;
		while(str[i+j]==pat[j]&&j<m)
		{
			j++;
		}	
		if(j==m)
		{
			c++;
			for(j=0;j<m;j++)
			{
				str[i+j]=rp[j];
				
			}i=i+m-1;
		}
	}
	printf("\nNumber of matchings:%d",c);
	return c;
}
int main()
{	
	char st[100],pt[20],rep[20];
	int m,n,p=0;
	printf("Enter main string:");
	scanf("%s",st);
	printf("\nEnter the sub string to be searched");
	scanf("%s",pt);
	printf("\nEnter the sub string to be replaced with:");
	scanf("%s",rep);
	p=bforce(st,pt,rep,strlen(pt),strlen(st));
	if(p==0)
	{
		printf("\nPattern not found");
	}
	else
	{
		printf("\nMain string after replacing with sub string:");
        	printf("\n %s",st);
	}
	return 0;
} 
