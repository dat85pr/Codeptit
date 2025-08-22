import java.util.Scanner;

public class J01008_Phantichthuasonguyento {
    public static boolean isprime(int n){
        if(n < 2){
            return false;
        }
        for(int i = 2; i <= (int)Math.sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        int d = 1;
        while(t-- > 0){
            long n = ip.nextLong();
            System.out.print("Test " + d + ": ");
            for(int i = 2; i <= n; i++){
                int cnt = 0;
                while(n % i == 0 && isprime(i)){
                    cnt++;
                    n /= i;
                }
                if(cnt > 0){
                    System.out.print(i + "(" + cnt + ") ");
                }
            }
            System.out.print("\n");
            d++;
        }
    }
}
