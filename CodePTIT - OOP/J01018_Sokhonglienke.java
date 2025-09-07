import java.util.Scanner;

public class J01018_Sokhonglienke {
    public static boolean check1(long n){
        while(n > 10){
            long a = n % 10;
            n /= 10;
            long b = n % 10;
            if(Math.abs(a - b) != 2) return false;
        }
        return true;
    }
    public static boolean check2(long n){
        long tong = 0;
        while(n > 0){
            long x = n % 10;
            n /= 10;
            tong += x;
        }
        if(tong % 10 == 0) return true;
        return false;
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            long n = ip.nextLong();
            if(check1(n) && check2(n)){
                System.out.println("YES");          
            }
            else{
                System.out.println("NO");
            }
        }
        
    } 
}
