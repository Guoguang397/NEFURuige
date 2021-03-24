import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        s = s.replace(sc.next(),"");
        System.out.println(s);
        for(int i=s.length()-1;i>=0;i--) {
            System.out.print(s.charAt(i));
        }
        sc.close();
    }
}
