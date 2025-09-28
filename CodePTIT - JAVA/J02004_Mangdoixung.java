import java.util.Scanner;
public class J02004_Mangdoixung {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            int n = ip.nextInt();
            int ok = 1;
            long[] a = new long[100];
            for(int  i = 0; i < n; i++){
                a[i] = ip.nextLong();
            }
            for(int i = 0; i < n; i++){
                if(a[i] != a[n - 1 - i]){
                   ok = 0;
                }
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
