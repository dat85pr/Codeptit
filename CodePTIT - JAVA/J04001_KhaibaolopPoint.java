import java.util.*;
import static java.lang.Math.*;

class Point{
    private double x, y;
    public Point(){
        this(0, 0);
    }
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    public Point(Point p){
        this.x = p.x;
        this.y = p.y;
    }
    public double getX(){
        return this.x;
    }
    public double getY(){
        return this.y;
    }
    double distance(Point p){
        return sqrt(pow(this.x - p.x, 2) + pow(this.y - p.y, 2));
    }
    double distance(Point a, Point b){
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    }
    @Override
    public String toString(){
        return x + " " + y;
    }
}
public class J04001_KhaibaolopPoint {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        while(t-- > 0){
            Point a = new Point(ip.nextDouble(), ip.nextDouble());
            Point b = new Point(ip.nextDouble(), ip.nextDouble());
            double res = a.distance(b);
            System.out.printf("%.4f\n", res);
        }       
    }
}