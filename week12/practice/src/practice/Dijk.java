package practice;
import java.util.Scanner;
class Dj{
	int c[][],p[],vi[],v,u,i,j,d[],s,n,min;
	public void read()
	{
		Scanner sc  = new Scanner(System.in);
		System.out.println("Enter number of vertices:");
		n = sc.nextInt();
		p = new int[n];
		d = new int[n];
		c = new int[n][n];
		vi = new int[n];
		System.out.println("Enter matrix:");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=sc.nextInt();
			}
			p[i]=-1;
			d[i]=999;
		}
		System.out.println("Enter source vertex");
		s = sc.nextInt();
	}
	public void dd()
	{
		d[s]=0;
		vi[0]=1;
		for(i=0;i<n;i++)
		{
			min=999;
			for(j=0;j<n;j++)
			{
				if(d[j]<min&&vi[j]==0)
				{
					min = d[j];
					u=j;
				}
			}
			vi[u]=1;
			for(v=0;v<n;v++)
			{
				if(d[u]+c[u][v]<d[v])
				{
					d[v]=d[u]+c[u][v];
					p[v]=u;
				}
			}
		}
	}
	public void path(int v)
	{
		if(p[v]!=-1)
			path(p[v]);
		if(v!=s)
			System.out.println("Vertex:"+v);
	}
	public void display()
	{
		for(i=0;i<n;i++)
		{
			if(i!=s)
			{
				System.out.println("Source:"+s);
				System.out.println("Path:");
				path(i);
				System.out.print("Distance:"+ d[i]);
			}
		}
	}
}
public class Dijk {
	public static void main(String args[])
	{
		Dj d = new Dj();
		d.read();
		d.dd();
		d.display();
	}
}
