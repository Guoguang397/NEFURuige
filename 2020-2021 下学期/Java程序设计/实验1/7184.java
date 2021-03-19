import java.util.*;

public class Main { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        if(str.equals("圆形"))  {
            double r=sc.nextDouble();
            System.out.print("圆形面积="+3.14*r*r);
        }
        else if(str.equals("矩形")) {
            double a=sc.nextDouble();
            double b=sc.nextDouble();
            System.out.print("矩形面积="+a*b);
        }
        else System.out.print("输入的不是圆形或矩形");
    }
}
