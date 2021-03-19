import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		double f=sc.nextDouble();
		double c=5*(f-50)/9+10;
		System.out.printf("The temprature is %.2f",c);
		sc.close();
	}
}
