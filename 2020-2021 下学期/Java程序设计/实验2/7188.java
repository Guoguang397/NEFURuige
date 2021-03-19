import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
		Student s=new Student(sc.next(),sc.nextInt());
		System.out.printf("该生姓名：%s,年龄：%d",s.getName(),s.getAge());
		sc.close();
	}
}

class Student
{
	public String name;
	public int age;
	
	public Student(String name,int age) {
		this.name=name;
		this.age=age;
	}
	
	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
}
