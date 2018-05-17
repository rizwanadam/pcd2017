package practice;
import java.util.Scanner;
class Pr
{
	int c[][],v[],ve,u,i,j,n,ne,minc,min;
	public void read()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of vertices");
		n=sc.nextInt();
		c = new int[n+1][n+1];
		v=new int[n+1];
		System.out.println("Enter cost matrix:");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				c[i][j]=sc.nextInt();
			}
		}
	}
	void find()
	{
		for(i=0;i<=n;i++)
			v[i]=0;
		minc=0;
		u=0;
		ve=0;
		ne=1;
		v[1]=1;
		while(ne<n)
		{
			for(i=1,min=999;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(c[i][j]<min&&v[i]==1)
					{
						min=c[i][j];
						u=i;
						ve=j;
					}
				}
			}
			if(v[ve]==0)
			{
				v[ve]=1;
				minc+=min;
				ne++;
			}
			
			c[u][ve]=c[ve][u]=999;
		}
		System.out.println("The cost is:"+minc);
	}
}
public class Prims {
	public static void main(String args[])
	{
		Pr p =new Pr();
		p.read();
		p.find();
	}
}
