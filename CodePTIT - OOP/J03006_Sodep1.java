import java.util.Scanner;

public class J03006_Sodep1 {
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
        for(int i = 0; i < s.length(); i++){
            int x = s.charAt(i) - '0';
            if(x % 2 != 0) return false;
        }
        if(tn(s)) return true;
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
