import java.util.*;
import static java.lang.Math.*;
class Thisinh{
    private String id, ten;
    private double toan, ly, hoa;

    public Thisinh(String id, String ten, double toan, double ly, double hoa) {
        this.id = id;
        this.ten = ten;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
    }
    public double kv(){
        String x = id.substring(0, 3);
        if(x.equals("KV1")) return 0.5;
        else if(x.equals("KV2")) return 1;
        else return 2.5;
    }
    public double getSum(){
        return toan * 2 + ly + hoa;
    }
    public String getForm(double x){
        if((int) x == x){
            return String.format("%.0f", x);
        }
        else return String.format("%.1f", x);
    }
    public String getStatus(){
        if(getSum() + kv() >= 24) return "TRUNG TUYEN";
        else return "TRUOT";
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %s %s", id, ten, 
                getForm(kv()), getForm(getSum()), getStatus());
    }
}
public class J04013_Baitoantuyensinh {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        String id = ip.nextLine();
        String name = ip.nextLine();
        double t = Double.parseDouble(ip.nextLine());
        double l = Double.parseDouble(ip.nextLine());
        double h = Double.parseDouble(ip.nextLine());
        Thisinh a = new Thisinh(id, name, t, l, h);
        System.out.println(a);
    }
}