import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Market mk=new Market();
        mk.addProduct(new Product("电视机"));
        mk.addProduct(new Product("洗衣机"));
        mk.addProduct(new Product("豆浆机"));
        mk.addProduct(new Product("打印机"));
        sc.next();
        Person p = new Person();
        p.setName("张乐");
        p.shopping(mk,new Product(sc.next()));
        sc.close();
    }
}

class Product
{
    private String name;
    public Product(String name) {
        this.name=name;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
}

class Market
{
    private String name;
    private Product[] products = new Product[0];

    public Product[] getProducts() {
        return products;
    }

    public void addProduct(Product product) {
        products = Arrays.copyOf(products,products.length+1);
        products[products.length-1]=product;
    }

    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }

    public Product sell(String productName) {
        for(Product product:products) {
            if(product.getName().equals(productName))
                return product;
        }
        return null;
    }
}

class Person
{
    private String name;
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void shopping(Market m,Product p) {
        if(m.sell(p.getName())==null)System.out.printf("%s所需商品无货\n",name);
        else System.out.printf("%s买到了%s",name,p.getName());
    }
}
