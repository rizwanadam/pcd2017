#include<stdio.h>
void get_matrix(int r,int c,int a[20][20]) 
{
        int i,j;
        printf("Enter the matrix:\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
}
void print_matrix(int r,int c,int b[20][20]) 
{
        int i,j;
        for(i=0;i<r;i++) 
{
                for(j=0;j<c;j++) 
{
                printf("%d ",b[i][j]);
                }
                printf("\n");
        }
}
void mul_matrices(int r,int c,int m,int n,int a[][20],int b[][20]) 
{ int e,d,k,l,sum=0,mul[20][20]={0}; 
for(e=0;e<r;e++) 
{ 
for(d=0;d<n;d++) 
{ 
for(k=0;k<m;k++) 
{
 sum=sum+a[e][k]*b[k][d];
}
mul[e][d]=sum; sum=0;
}
}
print_matrix(e,d,mul);
}
int main() 
{ int p,q,r,s,x[20][20],Y[20][20];
 printf("Enter the order of first matrix");
 scanf("%d%d",&p,&q); 
printf("Enter the order of second matrix"); 
scanf("%d%d",&r,&s); 
if(q!=r) { printf("The multiplication is not possible");
}
else 
{ 
get_matrix(p,q,x);
print_matrix(p,q,x);
get_matrix(r,s,Y);
print_matrix(r,s,Y);
mul_matrices(p,q,r,s,x,Y);
}
return 0;
}
