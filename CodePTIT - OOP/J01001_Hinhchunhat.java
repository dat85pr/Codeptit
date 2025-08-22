import java.util.Scanner;

public class J01001_Hinhchunhat {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int cd = ip.nextInt();
        int cr = ip.nextInt();
        if(cd <= 0 || cr <= 0){
            System.out.println("0");
        }
        else{
            System.out.print((cd + cr) * 2 + " " + cd * cr);
        }
    }
}
