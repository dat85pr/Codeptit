import java.util.*;
public class J02034_Bosungdayso {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int n = ip.nextInt();
        int[] a = new int[n];
        int Max = 0;
        int ok = 1;
        for(int i = 0; i < n; i++){
            a[i] = ip.nextInt();
            if(a[i] > Max) Max = a[i];
        }
        int i = 0, j = 1;
        while (j <= Max) {
            if(i < n && a[i] == j){ 
                i++;
            } 
            else {
                System.out.println(j);  
                ok = 0;
            }
            j++;
        }
        if(ok == 1) System.out.println("Excellent!");
    }
}
