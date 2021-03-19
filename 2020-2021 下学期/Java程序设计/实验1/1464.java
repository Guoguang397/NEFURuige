import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int [][]a = new int [4][4];
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++)
                a[i][j]=scan.nextInt();
        }
        // Write Code Here
        int xp=0,yp=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++)
                if(a[i][j]>a[xp][yp]) {
                    xp=i;
                    yp=j;
                }
        }
        System.out.printf("max=%d\nx=%d y=%d",a[xp][yp],xp,yp);
    }
}
