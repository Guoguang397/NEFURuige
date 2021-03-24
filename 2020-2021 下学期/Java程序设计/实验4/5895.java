import java.math.BigInteger;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigInteger ans = new BigInteger("0");
        for (int i = 1; i <= n; i++) {
            ans = ans.add(jc(BigInteger.valueOf(i)));
        }
        System.out.println(ans);
        sc.close();
    }

    public static BigInteger jc(BigInteger a) {
        if(a.equals(BigInteger.valueOf(1)))return new BigInteger("1");
        return a.multiply(jc(a.add(BigInteger.valueOf(-1))));
    }
}
