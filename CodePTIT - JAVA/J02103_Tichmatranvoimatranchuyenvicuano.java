import java.util.Scanner;

public class J02103_Tichmatranvoimatranchuyenvicuano {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        int tc = 1;
        while(t-- > 0){
            int n = ip.nextInt();
            int m = ip.nextInt();
            int[][] a = new int[n + 1][m + 1];
            int[][] b = new int[m + 1][n + 1];
            int[][] c = new int[n + 1][n + 1];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    a[i][j] = ip.nextInt();
                }
            }
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    b[i][j] = a[j][i];
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    for(int h = 0; h < m; h++){
                        c[i][j] += a[i][h] * b[h][j];
                    }
                }
            }
            System.out.println("Test " + tc + ":");
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    System.out.print(c[i][j] + " ");
                }
                System.out.println();
            }
            tc++;
        }
    }
}
