import java.util.Scanner;

public class J02020_Lietketohop_1 {
    public static int[] a = new int[10];
    public static int n, k, ok = 1;
    public static void Sinh(){
        int i = k;
        while(i >= 1 && a[i] == n - k + i){
            i--;
        }
        if(i == 0) ok = 0;
        else{
            a[i] = a[i] + 1;
            for(int j = i + 1; j <= k; j++){
                a[j] = a[j - 1] + 1;
            }
        }
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int cnt = 0;
        n = ip.nextInt();
        k = ip.nextInt();
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
        while(ok == 1){
            cnt += 1;
            for(int i = 1; i <= k ; i++){
                System.out.print(a[i] + " ");
            }
            System.out.println();
            Sinh();
        }
        System.out.println("Tong cong co " + cnt + " to hop");
    } 
}
