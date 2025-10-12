import java.util.*;

class Rectangle{
    private double width;
    private double height;
    private String color;
    public Rectangle(){
        width = 1;
        height = 1;
    }
    public Rectangle(double width, double height, String color) {
        this.width = width;
        this.height = height;
        this.color = color;
    }
    public double getWidth(){
        return this.width;
    }
    public void setWidth(double width){
        this.width = width;
    }
    public double getHeight() {
        return height;
    }
    public void setHeight(double height) {
        this.height = height;
    }
    public String getColor() {
        return this.color.substring(0, 1).toUpperCase() + color.substring(1).toLowerCase();
    }
    public void setColor(String color) {
        this.color = color;     
    }
    public double findArea(){
        return this.width * this.height;
    }
    public double findPerimeter(){
        return (this.width + this.height) * 2;
    }
    @Override
    public String toString(){
        return String.format("%d %d %s", (int) findPerimeter(), (int) findArea(), getColor());
    }
}
public class J04002_Khaibaolophinhchunhat {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        double w = ip.nextDouble();
        double h = ip.nextDouble();
        String c = ip.next();
        if(w > 0 && h > 0){
            Rectangle x = new Rectangle(w, h, c);
            System.out.println(x);
        }
        else{
            System.out.println("INVALID");
        }
    }
}