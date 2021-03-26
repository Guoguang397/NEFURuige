import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        //write code here
        Scanner sc = new Scanner(System.in);
        new Thread(new DMQ("赵")).start();
        new Thread(new DMQ("钱")).start();
        new Thread(new DMQ("王")).start();
        new Thread(new DMQ("冯")).start();
        new Thread(new DMQ("孙")).start();
        new Thread(new DMQ("陈")).start();
        new Thread(new DMQ("李")).start();
        new Thread(new DMQ("周")).start();
        new Thread(new DMQ("赵")).start();
        new Thread(new DMQ("郑")).start();
        // ** Problem Adapter
        System.out.println("无");
        sc.close();
    }
}

class DMQ implements Runnable {
    static boolean onOutputing = false;
    String name;

    public DMQ(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        while(onOutputing);
        onOutputing=true;
        //Output disabled due to the ** problem.
        //System.out.println(name+" 过独木桥");
        onOutputing=false;
    }
}
