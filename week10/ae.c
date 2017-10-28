#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{	int i;
	char st[100];
	printf("Enter the string:");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		if(isalpha(st[i]))
		{
			if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
			{ 
				st[i]-=32;
			}
		}
	}
	printf("\n%s",st);
}
