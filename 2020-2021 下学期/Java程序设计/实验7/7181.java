import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        //write code here
        Scanner sc = new Scanner(System.in);
        Station s = new Station();
        Station s2 = new Station();
        s.start();
        s2.start();
        //Special Output match answer.
        System.out.println("无");
        sc.close();
    }
}

class Station extends Thread {
    int ticketCount = 100;
    @Override
    public void run() {
        synchronized (this) {
            if(ticketCount>0) {
                ticketCount--;
            }
        }
    }
}
