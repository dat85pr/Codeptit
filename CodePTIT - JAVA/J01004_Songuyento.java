import java.util.Scanner;
public class J01004_Songuyento {
    public static boolean isprime(long n){
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
        while(t-- > 0){
            long n = ip.nextLong();
            if(isprime(n)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
