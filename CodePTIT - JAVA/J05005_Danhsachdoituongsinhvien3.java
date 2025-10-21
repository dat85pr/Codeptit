import java.util.*;
import java.util.Arrays;
class Sinhvien implements Comparable<Sinhvien>{
    private String id, name, lop, ns;
    private double gpa;
    public Sinhvien(){
        this(0, "", "", "", 0);
    }
    public Sinhvien(int id, String name, String lop, String ns, double gpa) {
        this.id = "B20DCCN" + String.format("%03d", id);
        this.name = name;
        this.lop = lop;
        this.ns = ns;
        this.gpa = gpa;
    }
    public String getFormname(){
        String res = "";
        String[] list = name.split(" ");
        for(String x : list){
            if(!x.isEmpty()){
                res += x.substring(0, 1).toUpperCase()
                        + x.substring(1).toLowerCase() + " ";
            }
        }
        return res.substring(0, res.length() - 1);
    }
    public String getFormns(){
        StringBuilder sb = new StringBuilder(ns);
        if(sb.charAt(1) == '/') sb.insert(0, "0");
        if(sb.charAt(4) == '/') sb.insert(3, "0");
        return sb.toString();
    }
    
    @Override
    public int compareTo(Sinhvien other){
        return Double.compare(other.gpa, this.gpa);
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %s %.2f", this.id, 
                    this.getFormname(), this.lop, this.getFormns(), this.gpa);
    }
}
public class J05005_Danhsachdoituongsinhvien3 {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Sinhvien[] ds = new Sinhvien[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String lop = ip.nextLine();
            String ns = ip.nextLine();
            double gpa = ip.nextDouble();
            ip.nextLine();
            ds[i] = new Sinhvien(i + 1, name, lop, ns, gpa);
        }
        Arrays.sort(ds);
        for(Sinhvien x : ds){
            System.out.println(x);
        }
    }
}   