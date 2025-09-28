import java.util.Scanner;

public class J01011_BSC_USC {
    public static long gcd(long a, long b) {
        if(a == 0 || b == 0){
            return a + b;
        }
        while (b != 0) {
            long tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }   
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            long a = ip.nextInt();
            long b = ip.nextInt();
            long bcnn = a * b / gcd(a, b);
            System.out.println(bcnn + " " + gcd(a, b));
        } 
        
    } 
}
