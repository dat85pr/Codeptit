import java.util.Scanner;
public class J01016_Chuso4vachuso7 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        long n = ip.nextLong();
        int cnt = 0;
        while(n > 0){
            long x = n % 10;
            n /= 10;
            if(x == 4 ||x == 7){
                cnt++;
            }
        }
        if(cnt == 4 || cnt== 7){
            System.out.print("YES");
        }
        else{
            System.out.print("NO");
        }
    }   
}
