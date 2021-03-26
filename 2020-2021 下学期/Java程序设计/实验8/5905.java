import java.io.FileOutputStream;
import java.io.FileWriter;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        try {
            Random random = new Random();
            FileWriter fwa = new FileWriter("a.txt");
            FileWriter fwb = new FileWriter("b.txt");
            for (int i = 0; i < 100; i++) {
                int a = random.nextInt(51);
                int b = random.nextInt(51);
                if(random.nextInt(2)==0) {
                    fwa.write(""+a+"+"+b+"=\n");
                    fwb.write(a+b+"\n");
                }else {
                    fwa.write(""+a+"-"+b+"=\n");
                    fwb.write(a-b+"\n");
                }
            }
            fwa.close();
            fwb.close();
        }catch (Exception e) {

        }finally {
            System.out.println("a");
        }
    }
}
