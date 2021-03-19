import java.util.*;
public class Main{
    public static void main(String[] args) {
        int m,n;    //第一个数的实部和虚部
		int p,q;    //第二个数的实部和虚部
		Scanner scanner =new Scanner(System.in);
		m=Integer.parseInt(scanner.next());
		n=Integer.parseInt(scanner.next());
		p=Integer.parseInt(scanner.next());
		q=Integer.parseInt(scanner.next());
		Complex t=new Complex(m,n);
		Complex s=new Complex(t);
		Complex r=new Complex(p,q);
	    (s.Add(r)).Print();
	    (t.Sub(r)).Print();
	}
}
// Write your own code
class Complex
{
	int sb,xb;
	
	public Complex(int sb,int xb) {
		this.sb=sb;
		this.xb=xb;
	}
	
	public Complex(Complex c) {
		sb=c.sb;
		xb=c.xb;
	}
	
	public Complex Add(Complex c) {
		sb+=c.sb;
		xb+=c.xb;
		return this;
	}
	
	public Complex Sub(Complex c) {
		sb-=c.sb;
		xb-=c.xb;
		return this;
	}
	
	public void Print() {
		if(sb!=0)System.out.print(sb);
		if(sb!=0&&xb!=0)System.out.print(" ");
		if(xb!=0)System.out.print(xb+"i");
		if(sb==0&&xb==0)System.out.print(0);
		System.out.print("\n");
	}
}
