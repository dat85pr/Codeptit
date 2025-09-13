import java.util.Scanner;
public class J01010_Catdoi {
    public static long solve(String s){
        long n = 0;
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            switch (c){
                case '0':
                case '9':
                case '8':
                    n = n * 10;
                    break;
                case '1':
                    n = n * 10 + 1;
                    break;
                default:
                    return 0;
            }
        }
        return n;
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            String s = ip.next();
            long x = solve(s);
            if(x == 0) System.out.println("INVALID");
            else System.out.println(x);
        }
    }
}
