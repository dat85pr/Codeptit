import java.util.Scanner;

public class J02012_Sapxepchen {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int[] a = new int[101];
        for(int i = 0; i < n; i++){
            a[i] = ip.nextInt();
        }
        for(int i = 0; i < n; i++){
            int j = i;
            while(j > 0 && a[j] < a[j - 1]){
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
                j--;
            }
            System.out.print("Buoc " + i +": ");
            for(int k = 0; k <= i; k++){
                System.out.print(a[k] + " ");
            }
            System.out.println();
        }
    }   
}
