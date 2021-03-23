import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        new Vehicle(sc.nextInt(),sc.nextDouble()).show();
        new Car(sc.nextInt(),sc.nextDouble(),sc.nextInt()).show();
        new Truck(sc.nextInt(),sc.nextDouble(),sc.nextInt(),sc.nextDouble()).show();
        sc.close();
    }
}

class Vehicle {
    int wheelNumber;
    double weight;

    public Vehicle(int wheelNumber, double weight) {
        this.wheelNumber = wheelNumber;
        this.weight = weight;
    }

    public void show() {
        System.out.println("汽车:");
        System.out.printf("轮子数:%d个\n",wheelNumber);
        System.out.printf("自身重量:%.1f吨\n",weight);
    }
}

class Car extends Vehicle
{
    int peopleNumber;

    public Car(int wheelNumber, double weight, int peopleNumber) {
        super(wheelNumber, weight);
        this.peopleNumber = peopleNumber;
    }

    @Override
    public void show() {
        System.out.println("小轿车:");
        System.out.printf("轮子数:%d个\n",wheelNumber);
        System.out.printf("自身重量:%.1f吨\n",weight);
        System.out.printf("额定乘客数:%d人\n",peopleNumber);
    }
}

class Truck extends Car {
    double zzl;

    public Truck(int wheelNumber, double weight, int peopleNumber, double zzl) {
        super(wheelNumber, weight, peopleNumber);
        this.zzl = zzl;
    }

    @Override
    public void show() {
        System.out.println("卡车:");
        System.out.printf("轮子数:%d个\n",wheelNumber);
        System.out.printf("自身重量:%.1f吨\n",weight);
        System.out.printf("额定乘客数%d人\n",peopleNumber);
        System.out.printf("载重量%.1f吨\n",zzl);
    }
}
