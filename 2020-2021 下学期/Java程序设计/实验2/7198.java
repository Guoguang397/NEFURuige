import java.util.Scanner;
class Dog
{
    private String name,color;
    private int age;
    public String getName(){return name;}
    
    public Dog() {
        name="dog1";
    	color="white";
    	age=1;
    }

	public String getcolor() {
		return color;
	}

	public int getAge() {
		return age;
	}

	public Dog(String name, String color, int age) 
	{
		this.name = name;
		this.color = color;
		this.age = age;
	}
}

public class Main {
        public static void main(String[] args) {
            //write code here
        	Scanner sc = new Scanner(System.in);
        	Dog d1 = new Dog();
        	Dog d2 = new Dog(sc.next(),sc.next(),sc.nextInt());
            System.out.println("name=" + d1.getName() + ",color=" +d1.getcolor()+",age="+d1.getAge());
            System.out.println("name=" + d2.getName() + ",color=" +d2.getcolor()+",age="+d2.getAge());
                                                            
        }
}
