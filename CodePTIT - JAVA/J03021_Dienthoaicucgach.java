import java.util.Scanner;

public class J03021_Dienthoaicucgach {
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
    public static String doi(String s){
        String n = "";
        for(int i = 0; i < s.length(); i++){
            char x = s.charAt(i);
            if(!Character.isLetter(x)) continue;
            switch(x){
                case 'a':
                case 'b':
                case 'c':
                    n += '2';
                    break;
                case 'd':
                case 'e':
                case 'f':
                    n += '3';
                    break;
                case 'g':
                case 'h':
                case 'i':
                    n += '4';
                    break;
                case 'j':
                case 'k':
                case 'l':
                    n += '5';
                    break;
                case 'm':
                case 'n':
                case 'o':
                    n += 6;
                    break;
                case 'p':
                case 'r':
                case 'q':
                case 's':
                    n += 7;
                    break;
                case 't':
                case 'u':
                case 'v':
                    n += 8;
                    break;
                case 'w':
                case 'x':
                case 'y':
                case 'z':
                    n += 9;
                    break;
            }
        }
        return n;
    }
    public static void main(String[] args){
        int t = ip.nextInt();
        while(t-- > 0){
            ip.nextLine();
            String s = ip.next();
            s = s.toLowerCase();
            if(tn(doi(s))) System.out.println("YES");
            else System.out.println("NO");
        }  
    }
}
