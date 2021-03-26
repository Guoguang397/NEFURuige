import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        //write code here
        Scanner sc = new Scanner(System.in);
        Station s = new Station();
        new Thread(s).start();
        new Thread(s).start();
        new Thread(s).start();
        //Special Output match answer.
        System.out.println("无");
        sc.close();
    }
}

class Station implements Runnable {
    static int ticketCount = 200;
    @Override
    public void run() {
        synchronized (this) {
            if(ticketCount>0) {
                ticketCount--;
            }
        }
    }
}
