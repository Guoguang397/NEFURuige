import java.io.FileInputStream;
import java.io.FileOutputStream;

public class Main {
    public static void main(String[] args) {
        if(args.length!=2) {
            System.out.println("a");
            return;
        }
        try {
            FileInputStream fis = new FileInputStream(args[0]);
            FileOutputStream fos = new FileOutputStream(args[1]);
            byte[] buffer = new byte[1024];
            int length;
            while((length = fis.read(buffer)) != -1) {
                fos.write(buffer,0,length);
            }
            fis.close();
            fos.close();
        }catch (Exception e) {
            System.out.println("a");
        }
    }
}
