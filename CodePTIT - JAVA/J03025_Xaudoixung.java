import java.util.*;

public class J03025_Xaudoixung {
    public static Scanner ip = new Scanner(System.in);
    public static int fault(String s){
        int cnt = 0;
        int l = 0, r = s.length() - 1;
        while(l <= r){
            if(s.charAt(l) != s.charAt(r)) cnt++;
            l++;
            r--;
        }
        return cnt;
    }
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        while(t-- > 0){
            String s = ip.nextLine();
            if(s.length() % 2 == 0){
                if(fault(s) == 1) System.out.println("YES");
                else System.out.println("NO");
            }
            else{
                if(fault(s) <= 1) System.out.println("YES");
                else System.out.println("NO");
            }
        }
    }
}