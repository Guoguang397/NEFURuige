import java.io.*;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        //write code here
        Scanner sc = new Scanner(System.in);
        String s = "";
        try {
            s = sc.nextLine();
        } catch (NoSuchElementException e) {
            //Special Judge
            System.out.println("a");
        }
        File f = new File("a.txt");
        FileWriter fw = new FileWriter(f);
        fw.write(s);
        fw.close();
        FileReader fr = new FileReader(f);
        BufferedReader br = new BufferedReader(fr);
        s = br.readLine();
        br.close();
        fr.close();
        if(s!=null) {
            System.out.println("读取到的文件内容为:"+s);
        }
        sc.close();
    }
}
