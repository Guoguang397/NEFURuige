import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> list = new ArrayList<String>();
        while(true) {
            String s = sc.next();
            if(s.equals("end")) {
                break;
            }
            list.add(s);
        }
        String[] strings = (String[]) list.toArray(new String[0]);
        Arrays.sort(strings);
        StringBuffer strBuf = new StringBuffer(50);
        for (String i: strings)
            System.out.print(i+" ");
    }
}
