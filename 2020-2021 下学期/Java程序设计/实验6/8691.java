import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        //write code here
        Scanner sc = new Scanner(System.in);
        try {
            int n = sc.nextInt();
            System.out.println(10-n);
        }catch (InputMismatchException e) {
            System.out.println("not int");
        }finally {
            System.out.println("end");
        }
    }
}
