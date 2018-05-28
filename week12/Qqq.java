package prac2;
import java.util.Scanner;
import java.util.Random;
public class Qqq {

	static int max = 2000;
	int partition(int a[],int low,int high)
	{
		int i,j,p,t;
		p=a[low];
		i=low+1;
		j=high;
		while(low<high)
		{
			while(a[i]<p&&i<=high)
				i++;
			while(a[j]>=p&&j>low)
				j--;
		
		if(i<j)
		{
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
		else
		{
			t=a[j];
			a[j]=a[low];
			a[low]=t;
			return j;
		}
		}
		return j;
	}
	void quick(int a[],int low,int high)
	{
		
		if(low<high)
		{
			int p = partition(a,low,high);
			quick(a,low,p-1);
			quick(a,p+1,high);
		}
	}
	public static void main(String args[])
	{
		int a[],i;
		System.out.println("Enter the array size:");
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		a = new int[max];
		Random r = new Random();
		for(i=0;i<n;i++)
			a[i]=r.nextInt(100);
		System.out.println("Array before sorting:");
		for(i=0;i<n;i++)
			System.out.print(a[i]+" ");
		Qqq q= new Qqq();
		q.quick(a,0,n-1);
		System.out.println("\nArray after sorting:");
		for(i=0;i<n;i++)
			System.out.print(a[i]+" ");
	}
}
