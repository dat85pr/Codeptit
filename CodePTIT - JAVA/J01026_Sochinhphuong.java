import java.util.Scanner;
public class J01026_Sochinhphuong {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            long n = ip.nextLong();
            long x = (long)Math.sqrt(n);
            if(x * x == n){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }  
}
