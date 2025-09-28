import java.util.Scanner;

public class J01014_Uocsonguyentolonnhat {
    public static Scanner ip = new Scanner(System.in);
    public static boolean isprime(long n){
        if(n < 2) return false;
        for(int i = 2; i <= (int)Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    public static void testcase(){
        long res = 0;
        long n = ip.nextInt();
        for(int i = 1; i <= (int)Math.sqrt(n); i++){
            if(n % i == 0){
                if(isprime(n / i)){
                    System.out.println(n / i);
                    return;
                }
                if(isprime(i)) res = i;
            }
        }
        System.out.println(res);
    }
    public static void main(String[] args){
        int t = ip.nextInt();
        while(t-- > 0){
            testcase();
        }
    }
}
