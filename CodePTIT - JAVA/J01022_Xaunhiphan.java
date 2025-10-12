import java.util.*;

public class J01022_Xaunhiphan {
    public static Scanner ip = new Scanner(System.in);
    public static long[] fb = new long[94];
    public static void prepare(){
        fb[1] = 1;
        fb[2] = 1;
        for(int i = 3; i <= 93; i++){
            fb[i] = fb[i - 2] + fb[i - 1];
        }
    }
    public static int find(int n, long k){
        if(n == 1) return 0;
        if(n == 2) return 1;
        if(k <= fb[n - 2]){
            return find(n - 2, k);
        }   
        else{
            return find(n - 1, k - fb[n - 2]);
        }
    }
    public static void main(String[] args){
        prepare();
        int t = ip.nextInt();
        while(t-- > 0){
            int a = ip.nextInt();
            long b = ip.nextLong();
            System.out.println(find(a, b));
        }
    }
}