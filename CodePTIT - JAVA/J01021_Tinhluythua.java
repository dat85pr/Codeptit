import java.util.*;

public class J01021_Tinhluythua {
    public static Scanner ip = new Scanner(System.in);
    static final long MOD = 1000000007L;
    public static long pow(long a, long b){
        if(b == 0) return 1;
        if(b == 1) return a % MOD;
        long tmp = pow(a, b / 2);
        if(b % 2 == 0){
            return (tmp * tmp) % MOD;
        }
        else{
            return (((tmp * tmp) % MOD) * a) % MOD;
        }
    }
    public static void main(String[] args){
        while(true){
           long a = ip.nextLong();
           long b = ip.nextLong();
           if(a == 0 && b == 0) break;
           else{
               System.out.println(pow(a, b));
           }
        }
    }
}