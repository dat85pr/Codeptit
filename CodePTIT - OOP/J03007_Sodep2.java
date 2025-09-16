import java.util.Scanner;

public class J03007_Sodep2 {
    public static Scanner ip = new Scanner(System.in);
    public static boolean tn(String s){
        int l = 0;
        int r = s.length() - 1;
        while(l <= r){
            if(s.charAt(l) != s.charAt(r)) return false;
            l++;
            r--;
        }
        return true;
    }
    public static boolean check(String s){
        if(s.charAt(0) != '8' || s.charAt(s.length() - 1) != '8') return false;
        int tong = 0;
        for(int i = 0; i < s.length(); i++){
            int x = s.charAt(i) - '0';
            tong += x;
        }
        if(tong % 10 == 0 && tn(s)) return true;
        else{
            return false;
        }
    }
    public static void main(String[] args){
        int t = ip.nextInt();
        while(t-- > 0){
            ip.nextLine();
            String s = ip.next();
            if(check(s)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
