package practice;

import java.util.Scanner;

public class Sub {
	static int x[] = new int[10];
	static int w[] = new int[10];
	public static void main(String args[])
	{
		Sub o = new Sub();
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the number of elements:");
		int n= s.nextInt();
		System.out.println("Enter the elements:");
		int sum=0;
		for(int i=0;i<n;i++)
		{
			w[i]=s.nextInt();
			x[i]=0;
			sum+=w[i];
		}
		System.out.println("Enter the sum:");
		int ss = s.nextInt();
		if(sum<ss)
			System.out.println("No solution");
		else
			o.sub(0,0,sum,ss);
	}
	void sub(int cs,int k,int r,int ss)
	{
		x[k]=1;
		if(cs+w[k]==ss)
		{
			System.out.println("Subtree found");
			for(int i=0;i<=k;i++)
			{
				if(x[i]==1)
					System.out.print(w[i]+" ");
			}			
		}
		else
		{
			if(cs+w[k]+w[k+1]<ss)
				sub(cs+w[k],k+1,r-w[k],ss);
		}
		if(cs+r-w[k]>=ss&&cs+w[k]<=ss)
		{
			x[k]=0;
			sub(cs,k+1,r-w[k],ss);
		}
	}
}
