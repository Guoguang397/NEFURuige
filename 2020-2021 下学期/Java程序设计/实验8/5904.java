import java.io.*;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(System.in);
            Data d = new Data();
            for(int i=0;i<5;i++) {
                d.username.add(sc.next());
                d.password.add(sc.next());
            }
            ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("1.bin"));
            oos.writeObject(d);
            oos.close();
            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("1.bin"));
            d = (Data) ois.readObject();
            System.out.println(d.username);
        }catch (Exception e) {
            System.out.println("a");
        }
    }
}

class Data implements Serializable {
    LinkedList<String> username = new LinkedList<>();
    LinkedList<String> password = new LinkedList<>();
}
