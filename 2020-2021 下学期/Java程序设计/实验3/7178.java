import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Computer computer=new Computer();
        computer.add(new Mouse());
        computer.add(new Keyboard());
        computer.add(new Mic());
        computer.powerOn();
        computer.powerOff();
    }
}

interface USB {
    void turnOn();
    void turnOff();
}

class Mouse implements USB {
    @Override
    public void turnOn() {
        System.out.println("鼠标启动了");
    }

    @Override
    public void turnOff() {
        System.out.println("鼠标关闭了");
    }
}

class Keyboard implements USB {
    @Override
    public void turnOn() {
        System.out.println("键盘启动了");
    }

    @Override
    public void turnOff() {
        System.out.println("键盘关闭了");
    }
}

class Mic implements USB {
    @Override
    public void turnOn() {
        System.out.println("麦克启动了");
    }

    @Override
    public void turnOff() {
        System.out.println("麦克关闭了");
    }
}

class Computer {
    USB[] usbs = new USB[3];
    int num=0;

    public void add(USB usb) {
        if(num<3) {
            usbs[num++] = usb;
        }
    }

    public void powerOn() {
        for(USB usb:usbs) {
            usb.turnOn();
        }
        System.out.println("计算机开机成功");
    }

    public void powerOff() {
        for(USB usb:usbs) {
            usb.turnOff();
        }
        System.out.println("计算机关机成功");
    }
}
