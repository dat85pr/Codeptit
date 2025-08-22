import java.util.Scanner;

public class J01002_Tinhtong {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            int tong = 0;
            int n = ip.nextInt();
            tong = n * (n + 1) / 2;
            System.out.println(tong);
        }
    }
}
