package practice;

import java.util.*;

class Fl{
	int c[][],n,i,j,k;
	public void read()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of vertices");
		n=sc.nextInt();
		c = new int[n+1][n+1];
		System.out.println("Enter cost matrix:");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				c[i][j]=sc.nextInt();
			}
		}
	}
	public void fll() {
		for(k=1;k<=n;k++)
			for(i=1;i<=n;i++)
				for(j=1;j<=n;j++)
					c[i][j]=Math.min(c[i][j], c[i][k]+c[k][j]);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				System.out.print(c[i][j]+" ");
			}
			System.out.println();
		}
	}
}
public class Floyd {
	public static void main(String args[])
	{
		Fl f = new Fl();
		f.read();
		f.fll();
	}
}
