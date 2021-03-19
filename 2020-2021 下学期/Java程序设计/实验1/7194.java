import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int rp=sc.nextInt();
		while(rp-->0)
		{
			int a,n,ans=0;
			a=sc.nextInt();
			n=sc.nextInt();
			for(int i=0;i<n;i++)
			{
				ans+=a;
				a=a%10+a*10;
			}
			System.out.println(ans);
		}
		sc.close();
	}
}
