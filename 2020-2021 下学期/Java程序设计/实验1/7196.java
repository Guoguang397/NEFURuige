import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n;
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();

	    //write your code
		boolean add=true;
		int fm=1;
		double ans=0;
		for(int i=0;i<n;i++)
		{
			if(add)ans+=1/(double)fm;
			else ans-=1/(double)fm;
			fm+=3;
			add=!add;
		}
		System.out.print(ans);
	}
}
