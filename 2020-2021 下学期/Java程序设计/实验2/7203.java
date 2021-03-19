import java.util.Scanner;

class ObjectCounter 
{
    //write your code here
	public static int count=0;
	
	public ObjectCounter() {
		count++;
	}
	
	public static int getCount() {
		return count;
	}
}

public class Main {
    public static void main(String[] args) {
	    Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for(int i=0;i<n;i++){
			ObjectCounter str1 = new ObjectCounter();
		}
		System.out.println(ObjectCounter.getCount());
	}
}
