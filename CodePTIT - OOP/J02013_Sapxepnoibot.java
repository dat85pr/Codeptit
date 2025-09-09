import java.util.Scanner;

public class J02013_Sapxepnoibot {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = ip.nextInt();
        }
        for(int i = 1; i < n; i++){
            int is_sorted = 1;
            for(int j = 0; j < n - i; j++){
                if(a[j] > a[j + 1]){
                    int tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                    is_sorted = 0;
                }
                
            }
            if(is_sorted == 1) break;
            System.out.print("Buoc " + i + ": ");
            for(int j = 0; j < n; j++){
                System.out.print(a[j] + " ");
            }
            System.out.println();
        }
    } 
}
