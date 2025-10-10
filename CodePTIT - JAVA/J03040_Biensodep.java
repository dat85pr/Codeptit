import java.util.*;
public class J03040_Biensodep {
    public static Scanner ip = new Scanner(System.in);
    public static boolean check1(String s){
        for(int i = 0; i <= 3; i++){
            if(s.charAt(i) >= s.charAt(i + 1)) return false;
        }
        return true;
    }
    public static boolean check2(String s){
        if(s.charAt(0) == s.charAt(1) && s.charAt(1) == s.charAt(2) && s.charAt(3) == s.charAt(4)) return true;
        return false;
    }
    public static boolean check3(String s){
        for(int i = 0; i <= 4; i++){
            if(s.charAt(i) != '6' && s.charAt(i) != '8') return false;
        }
        return true;
    }
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        while(t-- > 0){
            String s = ip.nextLine();
            String res = s.substring(5, 8) + s.substring(9);
            if(check1(res) || check2(res) || check3(res)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
            
        }
    }
}