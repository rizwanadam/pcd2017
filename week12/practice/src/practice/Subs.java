package practice;
import java.util.*;
public class Subs {
	static int w[],x[],n;
	public static void main(String args[])
	{
		int i,sum=0,t=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of elements:");
		n = sc.nextInt();
		System.out.println("Enter the elements:");
		w = new int[n];
		x = new int [n];
		for(i=0;i<n;i++)
		{
			w[i]=sc.nextInt();
			x[i]=0;
			t+=w[i];
		}
		System.out.println("Enter sum:");
		sum = sc.nextInt();
		if(sum>t)
			System.out.println("No solution");
		else
			sub(0,0,t,sum);
	}
	static void sub(int cs,int k,int r,int ss)
	{
		x[k]=1;
		if(cs +w[k]==ss)
		{
			System.out.println("Subtree found:");
			for(int i=0;i<=k;i++)
			{
				if(x[i]==1)
					System.out.print(w[i]+"");
			}
		}
		else {
			if(cs+w[k]+w[k+1]<ss)
				sub(cs+w[k],k+1,r-w[k],ss);}
		if(cs+r-w[k]>=ss&&cs+w[k]<=ss)
		{
			x[k]=0;
			sub(cs,k+1,r-w[k],ss);
		}
	}
}
