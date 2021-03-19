import java.util.*;

public class Main { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        if(n==0) {
            System.out.print("输入n不是大于1正整数");
        }
        for(int i=2;i<=n;i++) {
            boolean isss=true;
            for(int j=2;j<=Math.sqrt(i);j++) {
                if(i%j==0)isss=false;
            }
            if(isss)System.out.print(i+" ");
        }
    }
}
