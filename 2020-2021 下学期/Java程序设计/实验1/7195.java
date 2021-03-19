import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int num=sc.nextInt();
		int[] ws = new int[4];
		for(int i=0;i<4;i++)
		{
			ws[i]=num%10;
			ws[i]=(ws[i]+9)%10;
			num/=10;
		}
		System.out.print("The encrypted number is "+ws[1]+ws[0]+ws[3]+ws[2]);
		sc.close();
	}
}
