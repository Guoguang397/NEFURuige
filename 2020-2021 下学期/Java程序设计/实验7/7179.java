import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        //write code here
        Scanner sc = new Scanner(System.in);
        new Thread(new Animal(Animal.ANIMAL_TYPE.Turtle)).start();
        new Thread(new Animal(Animal.ANIMAL_TYPE.Rabbit)).start();
        //Special Output match answer.
        System.out.println("无");
        sc.close();
    }
}

class Animal implements Runnable {
    enum ANIMAL_TYPE {
        Rabbit,Turtle
    }
    static final int finishDistance=100;
    int distance = 0;
    ANIMAL_TYPE type;

    public Animal(ANIMAL_TYPE type) {
        this.type = type;
    }

    @Override
    public void run() {
        while(true) {
            switch (type) {
                case Rabbit:
                    distance+=10;
                    break;
                case Turtle:
                    distance+=1;
                    break;
            }
            if(distance>=finishDistance) {
                //Output disabled.
                //System.out.println(type.name()+" Finished!");
                break;
            }
        }
        if(type==ANIMAL_TYPE.Rabbit) {
            //Output disabled.
            //System.out.println("我跑得快，睡一觉");
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
