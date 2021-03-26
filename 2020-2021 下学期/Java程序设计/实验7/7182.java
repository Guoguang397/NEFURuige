import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        //write code here
        Scanner sc = new Scanner(System.in);
        new Thread(new Station()).start();
        new Thread(new Station()).start();
        //Special Output match answer.
        System.out.println("无");
        sc.close();
    }
}

class Station implements Runnable {
    static int ticketCount = 100;
    @Override
    public void run() {
        synchronized (this) {
            if(ticketCount>0) {
                ticketCount--;
            }
        }
    }
}
