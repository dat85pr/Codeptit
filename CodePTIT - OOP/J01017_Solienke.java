import java.util.Scanner;

public class J01017_Solienke {
    public static boolean kt(long n){
        while(n > 10){
            long x = n % 10;
            n /= 10;
            long y = n % 10;
            if(Math.abs(x - y) != 1) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            long n = ip.nextLong();
            if(kt(n)) System.out.println("YES");
            else System.out.println("NO");
        }
    } 
}
