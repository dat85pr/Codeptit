import java.util.*;
import java.util.Arrays;
class Sinhvien implements Comparable<Sinhvien>{
    private String msv, name, lop;
    private double d1, d2, d3;

    public Sinhvien(String msv, String name, String lop, double d1, double d2, double d3) {
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.d1 = d1;
        this.d2 = d2;
        this.d3 = d3;
    }
    
    @Override
    public int compareTo(Sinhvien other){
        return this.name.compareTo(other.name);
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %.1f %.1f %.1f", msv, name, lop, d1, d2, d3);
    }
}
public class J05031_Bangdiemthanhphan2 {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        Sinhvien[] ds = new Sinhvien[t];
        for(int i = 0; i < t; i++){
            String id = ip.nextLine();
            String name = ip.nextLine();
            String lop = ip.nextLine();
            double d1 = ip.nextDouble();
            double d2 = ip.nextDouble();
            double d3 = ip.nextDouble();           
            ip.nextLine();
            ds[i] = new Sinhvien(id, name, lop, d1, d2, d3);
        }
        Arrays.sort(ds);
        for(int i = 0; i < t; i++){
            System.out.print(i + 1 + " ");
            System.out.println(ds[i]);
        }
    }
}   