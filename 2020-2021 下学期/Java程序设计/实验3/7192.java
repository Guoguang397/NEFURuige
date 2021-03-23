public class Main {
    public static void main(String[] args) {
        Printer pr = new Printer();
        pr.print(new A4Paper());
        pr.print(new A6Paper());
    }
}

interface Paper {
    public String getName();
}

class Printer {
    public void print(Paper p) {
        System.out.println(p.getName());
    }
}

class A4Paper implements Paper {
    @Override
    public String getName() {
        return "A4";
    }
}

class A6Paper implements Paper {
    @Override
    public String getName() {
        return "A6";
    }
}
