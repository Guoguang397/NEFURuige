import java.util.Scanner;
class NoAgesException {
    NoAgesException() {
    }
    static void triangle(Person p) throws IllegalArgumentException{
        //start
        if(p.getAge()>200||p.getAge()<0) {
            throw new IllegalArgumentException();
        }
        //end
    }
}
class Person {
    //start
    private String name;
    private int age;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
        NoAgesException.triangle(this);
    }

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    //end
}
public class Main{
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        Person p=new Person(s.next(),s.nextInt());
        try {
            //start
            NoAgesException.triangle(p);
            System.out.println(p.getName()+"..."+p.getAge());
            //end
        }catch (IllegalArgumentException e) {
            System.out.println("年龄数值非法");
        }
    }
}
