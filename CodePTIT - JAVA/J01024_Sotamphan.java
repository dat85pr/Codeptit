import java.util.Scanner;

public class J01024_Sotamphan {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            int n = ip.nextInt();
            int ok = 1;
            while(n > 0){
                int x = n % 10;
                if(x != 1 && x != 2 && x != 0){
                    ok = 0;
                }
                n /= 10;
            }
            if(ok == 1){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }   
}
