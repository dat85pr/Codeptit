import java.util.Scanner;

public class J02106_Matrannhiphan {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int[][] a = new int[n + 1][3];
        int cnt = 0;
        for(int i = 1; i <= n; i++){
           for(int j = 1; j <= 3; j++){
               a[i][j] = ip.nextInt();
            }
        }
        for(int i = 1; i <= n; i++){
            int dem = 0;
            for(int j = 1; j <= 3; j++){
                if(a[i][j] == 1){
                    dem++;
                }
            }
            if(dem >= 2){
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}
