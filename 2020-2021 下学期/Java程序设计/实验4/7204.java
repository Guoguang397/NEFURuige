import java.math.BigInteger;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy年M月dd日");
        String dateStr = sc.next();
        Date freedom = sdf.parse("2019年7月12日");
        Date now = sdf.parse(dateStr);
        System.out.println((freedom.getTime()-now.getTime())/3600/24/1000);
        sc.close();
    }
}
