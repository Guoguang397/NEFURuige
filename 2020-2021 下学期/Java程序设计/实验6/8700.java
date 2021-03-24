import java.util.Scanner;
class DangerException extends Exception {
    //starts
    //end
}
class CargoBoat {
    int realContent;  //装载的重量
    int maxContent;   //最大装载量
    public void setMaxContent(int c) {
        maxContent = c;
    }
    public void loading(int m) throws DangerException {
        //starts
        realContent+=m;
        if(realContent>maxContent)throw new DangerException();
        //end
    }
}
public class Main {
    public static void main(String args[]) {
        CargoBoat ship = new CargoBoat();
        Scanner s=new Scanner(System.in);
        ship.setMaxContent(1000);
        int m=0;
        try{
            //starts
            while(true) {
                m = s.nextInt();
                ship.loading(m);
                System.out.println("目前装载了"+ship.realContent+"吨货物");
            }
            //end
        }
        catch(DangerException e) {
            //starts
            System.out.printf("超重\n");
            System.out.printf("无法再装载重量是%d吨的集装箱\n",m);
            //end
        }
        finally {
            System.out.printf("货船将正点启航");
        }
    }
}
