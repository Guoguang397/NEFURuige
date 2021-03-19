import java.util.*;

public class Main { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        int a[] = new int[3];
        for(int i=0;i<3;i++)a[i]=sc.nextInt();
        for(int i=0;i<2;i++){
            for(int j=0;j<2-i;j++){
                if(a[j]>a[j+1]){
                    int tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        }
        for(int i=0;i<3;i++)System.out.print(a[i]+" ");
        sc.close();
    }
}
