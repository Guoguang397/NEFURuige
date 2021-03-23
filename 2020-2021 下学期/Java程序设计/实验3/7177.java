import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        new Cat(sc.next()).speak();
        new Rat(sc.next()).speak();
        sc.close();
    }
}

class Cat extends Animal {
    public Cat(String name) {
        super(name);
    }

    @Override
    public void speak() {
        System.out.println(name+"的叫声为喵喵");
    }
}

class Rat extends Animal {
    public Rat(String name) {
        super(name);
    }

    @Override
    public void speak() {
        System.out.println(name+"的叫声为吱吱");
    }
}

class Animal {
    String name;

    public Animal(String name) {
        this.name = name;
    }

    public void speak() {

    }
}
