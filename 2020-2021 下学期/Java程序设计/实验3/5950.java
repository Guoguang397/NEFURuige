import java.util.Scanner;
interface ComputerAverage {
    //start
    //write your code between start and  end,do not  delete any code
    double average(double[] nums);
    //end
}
class Gymnastics implements ComputerAverage {
    public double average(double []data) {
        double sum=0;
        double temp;
        //start
        //write your code between start and  end,do not  delete any code
        double min=1008611,max=0;
        temp=0;
        for (double d:data) {
            sum+=d;
            temp++;
            min=d<min?d:min;
            max=d>max?d:max;
        }
        sum-=min+max;
        temp-=2;
        return sum/temp;
        //end
    }
}
class School implements ComputerAverage {
    //start
    //write your code between start and  end,do not  delete any code
    @Override
    public double average(double[] nums) {
        double sum=0;
        int cnt=0;
        for (double d:nums) {
            sum+=d;
            cnt++;
        }
        return sum/cnt;
    }
    //end
}

public class Main {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        double []data=new double[n];
        for(int i=0;i<n;i++){
            data[i]=scan.nextDouble();
        }
        //start
        //write your code between start and  end,do not  delete any code
        ComputerAverage g = new Gymnastics();
        //end
        System.out.print("Gymnastics average is:");
        System.out.printf("%.2f\n",g.average(data));
        //start
        //write your code between start and  end,do not  delete any code
        g = new School();
        //end
        System.out.print("School average is:");
        System.out.printf("%.2f",g.average(data));
    }
}
