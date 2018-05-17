package practice;
import java.util.Scanner;
class Hc{
	int a[][],x[],n,i,j;
	public void read()
	{
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter the number of vertices:");
		n=sc.nextInt();
		a = new int[n][n];
		x = new int[n];
		System.out.println("Enter the cost matrix:");
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[i][j]=sc.nextInt();
		x[0]=0;
		for(i=1;i<n;i++)
			x[i]=-1;
	}
	public void nextvalue(int k)
	{
		int i=0;
		while(true)
		{
			x[k]=x[k]+1;
			if(x[k]==n)
				x[k]=-1;
			if(x[k]==-1)
				return;
			if(a[x[k-1]][x[k]]==1)
			{
				for(i=0;i<k;i++)
					if(x[i]==x[k])
						break;
			}
			if(i==k)
			{
				if(k<n-1||k==n-1&&a[x[n-1]][0]==1)
					return;
			}
		}
	}
	public void getHcycle(int k)
	{
		while(true)
		{
			nextvalue(k);
			if(x[k]==-1)
				return;
			if(k==n-1)
			{
				System.out.println("Solution:");
				for(i=0;i<n;i++)
					System.out.print(x[i]+1+" ");
				System.out.println(1);
			}
			else
				getHcycle(k+1);
		}
	}
}
public class Hcycle {
	public static void main(String args[])
	{
		Hc h = new Hc();
		h.read();
		h.getHcycle(1);
	}
}
