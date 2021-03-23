import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Employer e1 = new BasicEmployee(sc.next(), sc.next(), sc.nextDouble());
        e1.showSalary();
        e1.showBonus();
        Employer e2 = new GoodEmployee(sc.next(), sc.next(), sc.nextDouble(), sc.nextDouble());
        e2.showSalary();
        e2.showBonus();
        sc.close();
    }
}

abstract class Employer {
    String name,department;

    public Employer(String name, String department, double salary) {
        this.name = name;
        this.department = department;
        this.salary = salary;
    }

    double salary;

    public void showSalary() {
        System.out.printf("我叫%s,在%s部门，我的工资是%.1f\n",name,department,salary);
    }
    public abstract void showBonus();
}

class BasicEmployee extends Employer {
    public BasicEmployee(String name, String department, double salary) {
        super(name, department, salary);
    }

    @Override
    public void showBonus() {
        System.out.println("我是普通员工，没有奖金，加油升级！");
    }
}

class GoodEmployee extends Employer {
    public GoodEmployee(String name, String department, double salary, double bonus) {
        super(name, department, salary);
        this.bonus = bonus;
    }

    double bonus;

    @Override
    public void showBonus() {
        System.out.printf("我是优秀员工，我的奖金是%.1f\n",bonus);
    }
}