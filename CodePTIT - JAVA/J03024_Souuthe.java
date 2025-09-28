import java.util.Scanner;

public class J03024_Souuthe {
    public static Scanner ip = new Scanner(System.in);
    public static String ktra(String s){
        int even = 0;
        int odd = 0;
        if(s.charAt(0) == '0') return "INVALID";
        for(int i = 0; i < s.length(); i++){
            if(Character.isLetter(s.charAt(i))) return "INVALID";
            int x = s.charAt(i) - '0';
            if(x % 2 == 0) even++;
            else odd++;
        }
        if(even > odd && s.length() % 2 == 0 || even < odd && s.length() % 2 == 1) return "YES";
        return "NO";
    }
    public static void main(String[] args){
        int t = ip.nextInt();
        while(t-- > 0){
            ip.nextLine();
            String s = ip.next();
            System.out.println(ktra(s));
        }  
    }
}
