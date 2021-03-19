import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    	Add a=new Add(sc.nextInt(),sc.nextInt(),sc.nextInt());
    	System.out.printf("和=%d", a.Sum());
	}
}
// Write your own code
class Add
{
	int s,w,d;

	public Add(int s, int w, int d) {
		this.s = s;
		this.w = w;
		this.d = d;
	}
	
	public int Sum(){
		int xs=(w-s)/d+1;
		return (s+w)*xs/2;
	}
}
