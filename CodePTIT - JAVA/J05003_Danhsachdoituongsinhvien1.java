import java.util.*;


class Sinhvien{
    private String id, name, lop, ns;
    private float gpa;
    public Sinhvien(int id, String name, String lop, String ns, float gpa) {
        this.id = "B20DCCN" + String.format("%03d", id);
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
public class J05003_Danhsachdoituongsinhvien1 {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Sinhvien[] ds = new Sinhvien[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String lop = ip.nextLine();
            String ns = ip.nextLine();
            float gpa = ip.nextFloat();
            ip.nextLine();
            ds[i] = new Sinhvien(i + 1, name, lop, ns, gpa);
        }
        for(Sinhvien x : ds){
            System.out.println(x);
        }
    }
}