import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SpottedDog sd = new SpottedDog(sc.next(),sc.nextInt(),sc.next(),sc.next());
        sd.show();
        UnspottedDog usd = new UnspottedDog(sc.next(),sc.nextInt(),sc.next());
        usd.show();
        sc.close();
    }
}

class Dog {
    String breed,color;
    int weight;

    public Dog(String breed, int weight, String color) {
        this.breed = breed;
        this.color = color;
        this.weight = weight;
    }

    public void show() {
        System.out.printf("这是一只%s体重为%d,颜色为%s\n",breed,weight,color);
    }
}

class SpottedDog extends Dog {
    String spotColor;

    public SpottedDog(String breed, int weight, String color, String spotColor) {
        super(breed, weight, color);
        this.spotColor = spotColor;
    }

    @Override
    public void show() {
        super.show();
        System.out.printf("这是一只%s,颜色为%s,斑点颜色为%s\n",breed,color,spotColor);
    }
}

class UnspottedDog extends Dog {
    public UnspottedDog(String breed, int weight, String color) {
        super(breed, weight, color);
    }

    @Override
    public void show() {
        System.out.printf("这是一只%s犬\n",breed);
    }
}
