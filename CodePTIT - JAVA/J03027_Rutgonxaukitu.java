import java.util.*;

public class J03027_Rutgonxaukitu {
    public static Scanner ip = new Scanner(System.in);
    
    public static void main(String[] args){
        StringBuilder sb = new StringBuilder();
        String s = ip.nextLine();
        sb.append(s);
        int i = 0;
        while(i < sb.length() - 1){
            if(sb.charAt(i) == sb.charAt(i + 1)){
                sb.delete(i, i + 2);
                if(i > 0) i--;
            }
            else i++;
        }
        if(sb.length()){
            System.out.println("Empty String");
        }
        else System.out.println(sb);
    }
}