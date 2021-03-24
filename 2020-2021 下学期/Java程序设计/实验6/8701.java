import java.util.InputMismatchException;
import java.util.Scanner;
class TestTriangle {
    static void triangle(int a, int b,int c) throws IllegalArgumentException,InputMismatchException{
        //starts
        if(!(a+b>c&&a+c>b&&b+c>a))throw new IllegalArgumentException();
        //end
    }
}

public class Main {
    public static void main(String[] args) {
        int a=0, b=0, c=0;
        Scanner in = new Scanner(System.in);
        try{
            a = in.nextInt();
            b = in.nextInt();
            c = in.nextInt();
            //starts
            TestTriangle.triangle(a,b,c);
            System.out.printf("三角形的三边长为：%d,%d,%d\n",a,b,c);
            //end
        } catch (IllegalArgumentException e) {
            System.out.printf("%d,%d,%d不能构成三角形\n",a,b,c);
        } catch (InputMismatchException e) {
            System.out.printf("请输入整数作为三角形的边长！\n");
        }
    }
}
