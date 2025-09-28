import java.util.Scanner;

public class J02011_Sapxepchon {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int[] a = new int[100];
        for(int i = 0; i < n; i++){
            a[i] = ip.nextInt();
        }
        for(int i = 0; i < n - 1; i++){
            int min = i;
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[min]){
                    min = j;
                }
            }
            int tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
            int b = i + 1;
            System.out.print("Buoc " + b + ": ");
            for(int j = 0; j < n; j++){
                System.out.print(a[j] + " ");
            }
            System.out.println();
        }
        
    }   
}
