import java.util.Scanner;

public class J01006_TinhsoFibonacci {
    static long[] F = new long[93];
    public static void sang(){
        F[1] = 1;
        F[2] = 1;
        int i = 3;
        while(i <= 92){
            F[i] = F[i - 1] + F[i - 2];
            i++;
        }
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        sang();
        while(t-- > 0){
            int n = ip.nextInt();
            System.out.println(F[n]);
        }
        
    }   
}
