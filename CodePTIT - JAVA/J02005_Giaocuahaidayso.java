import java.util.*;
import java.util.Arrays;
public class J02005_Giaocuahaidayso {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int n = ip.nextInt();
        int m = ip.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        int[] dd = new int[1005];
        for(int i = 0; i < n; i++){
            a[i] = ip.nextInt();
            dd[a[i]] = 1;
        }
        for(int i = 0; i < m; i++){
            b[i] = ip.nextInt();
        }
        Arrays.sort(b);
        for(int i = 0; i < m; i++){
            if(dd[b[i]] == 1){
                System.out.print(b[i] + " ");
                dd[b[i]] = 0;
            }
        }
    }
}