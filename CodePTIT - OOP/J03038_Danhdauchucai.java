import java.util.Scanner;

public class J03038_Danhdauchucai {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        String s = ip.next();
        int[] dd = new int[1001];
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            int x = s.charAt(i);
            dd[x]++;
        }
        for(int i = 0; i < s.length(); i++){
            int x = s.charAt(i);
            if(dd[x] > 0){
                cnt++;
                dd[x] = 0;
            }
        }
        System.out.println(cnt);
    }
}
