import java.util.*;

class Sinhvien{
    private String name, ns;
    private float d1, d2, d3;
    public Sinhvien(String name, String ns, float d1, float d2, float d3) {
        this.name = name;
        this.ns = ns;
        this.d1 = d1;
        this.d2 = d2;
        this.d3 = d3;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getNs() {
        return ns;
    }

    public void setNs(String ns) {
        this.ns = ns;
    }

    public float getD1() {
        return d1;
    }

    public void setD1(float d1) {
        this.d1 = d1;
    }

    public float getD2() {
        return d2;
    }

    public void setD2(float d2) {
        this.d2 = d2;
    }

    public float getD3() {
        return d3;
    }

    public void setD3(float d3) {
        this.d3 = d3;
    }

    public float total() {
        return d1 + d2 + d3;
    }
    @Override
    public String toString(){
        return String.format("%s %s %.1f", name, ns, total());
    }
}
public class J04005_Khaibaolopthisinh {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        Sinhvien a = new Sinhvien(ip.nextLine(), ip.nextLine(), ip.nextFloat(), ip.nextFloat(), ip.nextFloat());
        System.out.println(a);
    }
}