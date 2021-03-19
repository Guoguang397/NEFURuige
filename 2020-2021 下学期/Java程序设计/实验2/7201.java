 import java.util.Scanner; 
 class Point {
    
    private  int x;
	private  int y;
	
	public Point(int xx,int yy)	//构造方法
	{
		this.x=xx;
		this.y=yy;
	}
	public int getX() {
		return x;
	}
	public int getY() {
		return y;
	}
    //write your code
	public Point(Point p) {
		x=p.x;
		y=p.y;
	}
	public static void fun1(Point p) {
		System.out.println(p.getX());
	}
	
	public static Point fun2() {
		Point A =new Point(1,2);
		return A;
	}
}

 public class Main{
    public static void main(String[] args) {
    	//write your code
    	Scanner sc = new Scanner(System.in);
    	Point A=new Point(sc.nextInt(),sc.nextInt());
    	Point B=new Point(A);
    	System.out.println(B.getX());
    	Point.fun1(B);
    	B=Point.fun2();
    	System.out.println(B.getX());
    	sc.close();
	}
}
