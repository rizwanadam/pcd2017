package practice;
import java.util.Scanner;
class Kr{
	int c[][],parent[],i,j,u,v,n,ne,minc,min;
	public void read()
	{
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter the number of vertices:");
		n=sc.nextInt();
		c = new int[n+1][n+1];
		parent = new int[n+1];
		System.out.println("Enter the cost matrix:");
		for(i=1;i<=n;i++)
			for(j=1;j<n+1;j++)
				c[i][j]=sc.nextInt();
		for(i=0;i<n+1;i++)
			parent[i]=0;		
	}
	public int find(int m)
	{
		int p = m;
		while(parent[p]!=0)
			p=parent[p];
		return p;
	}
	public void union(int i,int j)
	{
		if(i<j)
			parent[i]=j;
		else
			parent[j]=i;
	}
	public void krr()
	{
		minc=0;
		u=0;
		v=0;
		ne=1;
		while(ne<n)
		{
			for(i=1,min=999;i<n+1;i++)
			{
				for(j=1;j<n+1;j++)
				{
					if(c[i][j]<min&&i!=j)
					{
						min=c[i][j];
						u=i;
						v=j;
					}
				}
			}
			i=find(u);
			j=find(v);
			if(i!=j)
			{
				union(i,j);
				System.out.println(u+" "+v+" "+c[u][v]);
				minc+=c[u][v];
				ne++;
			}
			c[u][v]=c[v][u]=999;
		}
		System.out.println("Cost:"+minc);
	}
}
public class Krus {
	public static void main(String args[])
	{
		Kr k = new Kr();
		k.read();
		k.krr();
	}
}
