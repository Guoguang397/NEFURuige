import java.util.Scanner;

class Check {
    //write your code here
    String ans;
	public Check(int a,int b) {
		ans="Larger value: "+String.valueOf(a>b?a:b);
	}
	public Check(String a,String b) {
		ans="Are equal: "+a.equals(b);
	}
	public Check(double a,double b,double c) {
		ans="a*b*c = "+a*b*c;
	}
	public void print() {
		System.out.println(ans);
	}
}

public class Main {
	public static void main(String args[]) {
        //write your code here
		Scanner sc = new Scanner(System.in);
		new Check(sc.nextInt(),sc.nextInt()).print();
		new Check(sc.nextDouble(),sc.nextDouble(),sc.nextDouble()).print();
		new Check(sc.next(),sc.next()).print();
	}
}
