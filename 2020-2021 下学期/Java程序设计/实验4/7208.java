import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> list = new ArrayList<>();
        ArrayList<String> list2 = new ArrayList<>();
        ArrayList<String> ans = new ArrayList<>();
        while(true) {
            String s = sc.next();
            if(s.equals("end")) {
                break;
            }
            list.add(s);
        }
        while(true) {
            String s = sc.next();
            if(s.equals("end")) {
                break;
            }
            list2.add(s);
        }
        for(String s:list) {
            for (String s2:list2) {
                if(s.equals(s2)) {
                    ans.add(s);
                    break;
                }
            }
        }
        String[] ansArr = ans.toArray(new String[0]);
        Arrays.sort(ansArr);
        for (String s:ansArr) {
            System.out.print(s+" ");
        }
        sc.close();
    }
}
