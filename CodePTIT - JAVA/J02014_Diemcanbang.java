import java.util.Scanner;
public class J02014_Diemcanbang {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            int n = ip.nextInt();
            int[] a = new int[n];
            int[] su = new int[n];
            int sumall = 0;
            int ok = 0;
            for(int i = 0; i < n; i++){
                a[i] = ip.nextInt();
                sumall += a[i];
                if(i == 0) su[i] = a[i];
                else su[i] = su[i - 1] + a[i];
            }
            for(int i = 1; i < n; i++){
                if(su[i - 1] == sumall - su[i]){
                    ok = 1;
                    System.out.println(i + 1);
                    break;
                }
            }
            if(ok == 0) System.out.println("-1");
        }
    }
}
