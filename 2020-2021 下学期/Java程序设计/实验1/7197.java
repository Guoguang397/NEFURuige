import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner scanner = new Scanner(System.in);
		int m, n;

		m = scanner.nextInt();
		n = scanner.nextInt();

        //write your code
		int cnt=0;
		for(int i=m;i<=n;i++)
		{
			if(i%4==0&&i%100!=0||i%400==0)
			{
				if(cnt%4!=0)System.out.print(" ");
				System.out.print(i);
				cnt++;
				if(cnt%4==0)System.out.print("\n");
			}
		}
	}
}
