import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
	{
		int a[]={-2,1,4,5,8,12,17,23,45,56,90,100};
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		boolean found=false;
		for(int i=0;i<a.length;i++)
		{
			if(a[i]==n)
			{
				System.out.print(""+n+"是数组中的第"+i+"个元素");
				found=true;
			}
		}
		if(!found)
		{
			System.out.print(""+n+"不在数组中");
		}
		sc.close();
	}
}
