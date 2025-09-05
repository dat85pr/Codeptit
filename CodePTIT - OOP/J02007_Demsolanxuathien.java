import java.util.Scanner;

public class J02007_Demsolanxuathien {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        int k = 1;
        while(t-- > 0){
            int n = ip.nextInt();
            int[] dd = new int[100005];
            int[] a = new int[100];
            for(int  i = 0; i < n; i++){
                a[i] = ip.nextInt();
                dd[a[i]]++;
            }
            System.out.println("Test " + k + ":");
            for(int i = 0; i < n; i++){
                if(dd[a[i]] > 0){
                    System.out.println(a[i] + " xuat hien " + dd[a[i]] + " lan");
                    dd[a[i]] = 0;
                }
            }
            k++;
        }
    }   
}
