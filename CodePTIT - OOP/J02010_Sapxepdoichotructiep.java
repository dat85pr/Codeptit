import java.util.Scanner;

public class J02010_Sapxepdoichotructiep {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int[] a = new int[100];
        for(int i = 0; i < n; i++){
            a[i] = ip.nextInt();
        }
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[i]){
                   int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
                
            }
            int b = i + 1;
            System.out.print("Buoc " + b + ": ");
            for(int j = 0; j < n; j++){
                System.out.print(a[j] + " ");
            }
            System.out.println();
        }
        
    }  
}
