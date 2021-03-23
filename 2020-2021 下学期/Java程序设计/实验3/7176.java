import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Teacher t1=new Teacher("英语",sc.next());
        Teacher t2=new Teacher("数学",sc.next());
        TeachingRace(t1);
        TeachingRace(t2);
        sc.close();
    }

    public static void TeachingRace(Teachable t) {
        t.TeachingRace();
    }
}

class EnglishTeacher implements Teachable {
    String subject,words;

    public EnglishTeacher(String subject, String words) {
        this.subject = subject;
        this.words = words;
    }

    @Override
    public void TeachingRace() {
        System.out.printf("我是%s老师，I say %s\n",subject,words);
    }
}

class Teacher implements Teachable {
    String subject,words;

    public Teacher(String subject, String words) {
        this.subject = subject;
        this.words = words;
    }

    @Override
    public void TeachingRace() {
        System.out.printf("我是%s老师，I say %s\n",subject,words);
    }
}

interface Teachable {
    public void TeachingRace();
}
