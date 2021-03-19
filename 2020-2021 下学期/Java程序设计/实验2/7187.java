import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
		LFT lft=new LFT();
		lft.setDemo(sc.nextInt(), sc.nextInt(), sc.nextInt());
		System.out.print("体积="+lft.getVolume());
		sc.close();
	}
}

class LFT
{
	int x,y,z;
	
	public void setDemo(int x,int y,int z) {
		this.x=x;
		this.y=y;
		this.z=z;
	}
	
	public int getVolume(){
		return x*y*z;
	}
}
