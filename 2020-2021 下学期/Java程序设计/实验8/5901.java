import java.io.*;
import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try {
            String s = "";
            Scanner sc = new Scanner(System.in);
            int points = 0;
            File fin = new File("Test.txt");
            FileReader fr = new FileReader(fin);
            BufferedReader br = new BufferedReader(fr);
            while((s=br.readLine())!=null) {
                if(s.startsWith("*")) {
                    String ans = sc.next();
                    //No answer provided, random instead.
                    Random random = new Random();
                    if(ans.charAt(0)==(char) 'A'+random.nextInt(3)) {
                        points++;
                    }
                }else System.out.println(s);
            }
            br.close();
            fr.close();
            System.out.println("Points:"+points);
        }catch (Exception e) {
            System.out.println("a");
        }
    }
}
