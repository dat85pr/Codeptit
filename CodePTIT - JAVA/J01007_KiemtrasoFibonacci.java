import java.util.*;

public class J01007_KiemtrasoFibonacci {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int tc = ip.nextInt();
        while (tc-- > 0) {
            long n = ip.nextLong();
            long f1 = 1, f2 = 1, f3 = 0;
            if (n == 0 || n == 1) {
                System.out.println("YES");
                continue;
            }
            while (f3 < n) {
                f3 = f1 + f2;
                f1 = f2;
                f2 = f3;
            }
            if (f3 == n) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}