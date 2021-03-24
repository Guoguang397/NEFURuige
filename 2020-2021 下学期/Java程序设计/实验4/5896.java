import java.util.Calendar;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Calendar calendar = Calendar.getInstance();
        int y = sc.nextInt(), m = sc.nextInt()-1;
        calendar.set(y,m,1);
        int cnt = calendar.get(Calendar.DAY_OF_WEEK)-1;
        for (int i = 0; i < cnt; i++) {
            System.out.printf("     ");
        }
        while(calendar.get(Calendar.MONTH) == m) {
            System.out.printf("%5d",calendar.get(Calendar.DAY_OF_MONTH));
            cnt++;
            if(cnt%7==0) System.out.println();
            calendar.add(Calendar.DATE,1);
        }
        sc.close();
    }
}
