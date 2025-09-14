import java.util.Scanner;

public class J02105_Danhsachke {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
       
        int n = ip.nextInt();
        int[][] a = new int[n + 1][n + 1];
        int[][] b = new int[n + 1][n + 1];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = ip.nextInt();
                if(a[i][j] == 1){
                    b[i][j] = 1;
                    b[j][i] = 1;
                }
            }
        }
        for(int i = 0; i < n; i++){
            int x = i + 1;
            System.out.print("List(" + x + ") = ");
            for(int j = 0; j < n; j++){
                if(b[i][j] == 1 && i != j){
                    System.out.print(j + 1 + " ");
                }
            }
            System.out.println();
        }
    }
}
