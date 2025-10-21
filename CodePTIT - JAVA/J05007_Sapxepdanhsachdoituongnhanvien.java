import java.util.*;
import java.util.Arrays;
class Nhanvien implements Comparable<Nhanvien>{
    private String id, name, gt, ns, dc, mst, nkhd;
    private int day, month, year;
    public Nhanvien(int id, String name, String gt, String ns, String dc, String mst, String nkhd) {
        this.id = String.format("%05d", id);
        this.name = name;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
        this.mst = mst;
        this.nkhd = nkhd;
        this.day = Integer.parseInt(ns.substring(0, 2));
        this.month = Integer.parseInt(ns.substring(3, 5));
        this.year = Integer.parseInt(ns.substring(6));
    }
    
    @Override
    public int compareTo(Nhanvien other){
        if(this.year == other.year){
            if(this.month == other.month){
                return this.day - other.day;
            }
            return this.month - other.month;
        }
        return this.year - other.year;
    }
    @Override
    public String toString(){
        return id + " " + name + " " + gt + " " + ns + 
                " " + dc + " " + mst + " " + nkhd; 
    }
}
public class J05007_Sapxepdanhsachdoituongnhanvien {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Nhanvien[] ds = new Nhanvien[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String gt = ip.nextLine();
            String ns = ip.nextLine();
            String dc = ip.nextLine();
            String mst = ip.nextLine();
            String nkhd = ip.nextLine();
            ds[i] = new Nhanvien(i + 1, name, gt, ns, dc, mst, nkhd);
        }
        Arrays.sort(ds);
        for(Nhanvien x : ds){
            System.out.println(x);
        }
    }
}   