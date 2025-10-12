import java.util.*;

public class J02008_BoisonhonhatcuaNsonguyenduongdautien {
    public static Scanner ip = new Scanner(System.in);
    public static long gcd(long a, long b) {
        while (b != 0) {
            long temp = b;
            b = a % b;
            a = temp;
        }
        return Math.abs(a);
    }
    public static long lcm(long a, long b){
        return a * b / gcd(a, b);
    }
    public static void main(String[] args){
        int t = ip.nextInt();
        while(t-- > 0){
            long n = ip.nextLong();
            long res = n;
            for(int i = 1; i < n; i++){
                res = lcm(i, res);
            }
            System.out.println(res);
        }
    }
}