import java.util.*;


class Sinhvien{
    private String id, name, lop, ns;
    private float gpa;
    public Sinhvien(){
        this("B20DCCN001", "", "", "", 0);
    }
    public Sinhvien(String id, String name, String lop, String ns, float gpa) {
        this.id = id;
        this.name = name;
        this.lop = lop;
        this.ns = ns;
        this.gpa = gpa;
    }
    
    public String chuanhoans(){
        StringBuilder sb = new StringBuilder(ns);
        if(sb.charAt(1) == '/') sb.insert(0, "0");
        if(sb.charAt(4) == '/') sb.insert(3, "0");
        return sb.toString();
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %s %.2f", this.id, this.name, this.lop, this.chuanhoans(), this.gpa);
    }
}
public class J04006_Khaobaolopsinhvien {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        Sinhvien a = new Sinhvien("B20DCCN001", ip.nextLine(), ip.nextLine(), ip.nextLine(), ip.nextFloat());
        System.out.println(a);
    }
}