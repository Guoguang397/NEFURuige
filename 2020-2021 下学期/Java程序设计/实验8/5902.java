import java.io.*;

public class Main {
    public static void main(String[] args) {
        try {
            String s = "";
            File fin = new File("a.txt");
            File fout = new File("b.txt");
            FileReader fr = new FileReader(fin);
            BufferedReader br = new BufferedReader(fr);
            s = br.readLine();
            br.close();
            fr.close();
            char[] ch = s.toCharArray();
            for (int i=0;i<ch.length;i++) {
                if(ch[i]>='a'&&ch[i]<='z') {
                    ch[i] = (char) ((ch[i]-'a'+3)%26+'a');
                }
            }
            FileWriter fw = new FileWriter(fout);
            fw.write(ch);
            fw.close();
        }catch (Exception e) {
            System.out.println("a");
        }
    }
}
