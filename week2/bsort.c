#include<stdio.h>
void read_array(int a[],int n) 
{
        int i;
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
}
void display_array(int a[],int n) 
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
}
void bubblesort(int a[],int n) 
{
        int i,j,c=1,t;
        for(i=0;i<n-1&&(c);i++)
        {
                c=0;
                for(j=0;j<n-1-i;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                t=a[j];
                                a[j]=a[j+1];
                                a[j+1]=t;
                                c=1;
                        }
                }
        }
}
int main() 
{
        int n;
        printf("Enter the number of integers in the array:");
        scanf("%d",&n);
        int b[n];
        printf("Enter array:");
        read_array(b,n);
        bubblesort(b,n);
        display_array(b,n);
        return 0;
}
