package practice;

import java.util.Scanner;
public class Tsp {
	static int tspdp(int c[][],int tour[],int start,int n)
	{
		int i,j,cost,k;
		int mintour[] = new int[n+1];
		int temp[] = new int[n+1];
		int minc=999;
		if(start==n-1)
			return (c[tour[n-1]][tour[n]]+c[tour[n]][1]);
		for(i=start+1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				temp[j]=tour[j];
			temp[start+1]=tour[i];
			temp[i]=tour[start+1];
			if((c[tour[n]][tour[i]]+(cost=tspdp(c,temp,start+1,n)))<minc)
			{
				minc=c[tour[start]][tour[i]]+cost;
				for(k=1;k<=n;k++)
				{
					mintour[k]=temp[k];
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			tour[i]=mintour[i];
		}
		return minc;
	}
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		int i,j,n;
		System.out.println("Enter number of vertices:");
		n = s.nextInt();
		int c[][]=new int[n+1][n+1];
		int tour[]=new int[n+1];
		System.out.println("Enter matrix:");
		for(i=1;i<=n;i++)
		{
			tour[i]=i;
			for(j=1;j<=n;j++)
			{
				c[i][j]=s.nextInt();
			}
		}
		int cost = tspdp(c,tour,1,n);
		System.out.println("Path:");
		for(i=1;i<=n;i++)
		{
			System.out.println(tour[i]+" ");
		}
		System.out.println("Cost:"+cost);
	}
}
