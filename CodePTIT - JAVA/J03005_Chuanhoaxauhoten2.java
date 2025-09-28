import java.util.Scanner;

public class J03005_Chuanhoaxauhoten2 {
    public static Scanner ip = new Scanner(System.in);
    public static String upp(String s){
        if(s.length() == 1){
            return s.toUpperCase();
        }
        return s.substring(0, 1).toUpperCase() + s.substring(1);
    }
    public static void main(String[] args){
        int t = Integer.parseInt(ip.nextLine());
        while(t-- > 0){
            String s = ip.nextLine().toLowerCase().trim();
            String[] a = s.split("\\s+");
            for(int i = 1; i < a.length; i++){
                    System.out.print(upp(a[i]));
                    if(i != a.length - 1) System.out.print(" ");
                    else System.out.print(", ");
            }
            System.out.println(a[0].toUpperCase());
        }  
    }
}
