import java.util.*;
import static java.lang.Math.*;
public class J01025_Hinhvuong {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int x1 = ip.nextInt();
        int y1 = ip.nextInt();
        int x2 = ip.nextInt();
        int y2 = ip.nextInt();
        int x3 = ip.nextInt();
        int y3 = ip.nextInt();
        int x4 = ip.nextInt();
        int y4 = ip.nextInt();
        int minX = min(x1, x3);
        int maxX = max(x2, x4);
        int minY = min(y1, y3);
        int maxY = max(y2, y4);
        int side = max(maxX - minX, maxY - minY);
        System.out.println(side * side);
    }
}