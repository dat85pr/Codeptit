import java.util.Scanner;

public class J01009_Tonggiaithua {
    public static void main(String[] args) {
    Scanner ip = new Scanner(System.in);
        long n = ip.nextLong();
        long tong = 0, tmp = 1;
        for(int i = 1; i <= n; i++){
            tmp *= i;
            tong += tmp;
        }
    System.out.print(tong);
    }
}
