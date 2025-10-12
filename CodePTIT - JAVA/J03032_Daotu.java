import java.util.*;

public class J3032_Daotu {
    public static Scanner ip = new Scanner(System.in);
    public static String dao(String s){
        String res = "";
        for(int i = s.length() - 1; i >= 0; i--){
            res += s.charAt(i);
        }
        return res;
    }
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        while(t-- > 0){
            String s = ip.nextLine();
            String[] parts = s.split(" ");
            for(String i : parts){
                System.out.print(dao(i) + " ");
            }
            System.out.println();
        }
    }
}