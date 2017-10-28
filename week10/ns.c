#include<stdio.h>
#include<string.h>
int main()
{       int i;
	char st[100];
	printf("Enter the string:");
	scanf("%s",st);
	int l=strlen(st);
	printf("%d",l);
	for(i=0;i<l/2;i++)
	{ 
		st[l]=st[i];
		st[i]=st[l-i-1];
		st[l-i-1]=st[l];
	}
	st[l]='\0';
	printf("\n %s",st);
}
