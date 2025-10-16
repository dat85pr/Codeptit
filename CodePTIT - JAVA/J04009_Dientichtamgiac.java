import java.util.*;
import static java.lang.Math.*;
class Point{
    private double x, y;
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    public Point(){
        this(0, 0);
    }
    public Point(Point p){
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }
    public double distance(Point p){
        return sqrt(pow(this.x - p.x, 2) + pow(this.y - p.y, 2));
    }
    public double distance(Point p1, Point p2){
        return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    }
    @Override
    public String toString(){
        return x + " " + y;
    }
}

public class J04009_Dientichtamgiac {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        for(int i = 0; i < t; i++){
            Point a = new Point(ip.nextDouble(), ip.nextDouble());
            Point b = new Point(ip.nextDouble(), ip.nextDouble());
            Point c = new Point(ip.nextDouble(), ip.nextDouble());
            double ab = a.distance(b);
            double ac = a.distance(c);
            double bc = b.distance(c);
            if(ab + ac <= bc || ab + bc <= ac || bc + ac <= ab){
                System.out.println("INVALID");
            }
            else{
                double p = (ab +  ac + bc) / 2;
                System.out.println(String.format("%.2f", sqrt(p * (p - ab) * (p - ac) * (p- bc))));
            }
        }
    }
}