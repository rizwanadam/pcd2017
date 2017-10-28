#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define m 200
char s[m];
int top=-1;
void push(char c)
{
	if(top==m-1)
	{
		printf("Overflow");
	}
	else
	{
		top=top+1;
		s[top]=c;
	}
}
char pop()
{
	char c;
	if(top==-1)
	{
 		printf("Underflow");
	}
	else
 	{
		c=s[top];
		top--;
	}
return c;
}
int priority(char c)
{
	if(c=='#')
   	return 0;
	else if(c=='(')
	return 1;
	else if(c=='+'||c=='-')
	return 2;
	else if(c=='/'||c=='*'||c=='%')
	return 3;
	else
	return 4;
}
void intopost(char *infix,char *postfix)
{	
	int i=0,j=0;
	push('#');
	for(i=0;infix[i]!='\0';i++)
	{
		if(infix[i]=='(')
		{
			push(infix[i]);
			
		}
		else if(isalnum(infix[i]))
		{
 			postfix[j]=infix[i];
			j++;
		}
		else if(infix[i]==')')
		{
		 	while(s[top]!='(')
			{
			postfix[j]=pop();
			j++;
			}
			pop();
		}
		else 
		{	while(priority(s[top])>=priority(infix[i]))
			{
			postfix[j]=pop();
			j++;
			}
		push(infix[i]);
		}	

	}
	while(s[top]!='#')
	{
		postfix[j]=pop();
		j++;
	}
	top--;
	postfix[j]='\0';
	printf("%s",postfix);
}
int operation(int o1,int o2,char c)
{
	switch(c)
	{
	case '+':return (o1+o2);
	case '-':return (o1-o2);
	case '*':return (o1*o2);
	case '/':return o1/o2;
	case '%':return (fmod(o1,o2));
	case '^':return (pow(o1,o2));
	}
}
void pe(char *p)
{
int i,op2,op1,res;
for(i=0;p[i]!='\0';i++)
{
	if(isdigit(p[i]))
	push(p[i]-'0');
	else
	{	
	op2=pop();
	op1=pop();
	res=operation(op1,op2,p[i]);
	push(res);
	}
}
res=pop();
printf("Value is:%d",res);
}

int main()
{
char ist[100],pst[100];
printf("Enter the infix expression");
scanf("%s",ist);
intopost(ist,pst);
printf("The postfix expression is %s ",pst);
pe(pst);
return 0;
}

