import java.util.*;
import java.util.Arrays;
class Sinhvien implements Comparable<Sinhvien>{
    private String id, ten, rank;
    private double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, tol;

    public Sinhvien(int id, String ten, double d1, double d2, double d3, double d4, double d5, double d6, double d7, double d8, double d9, double d10) {
        this.id = "HS" + String.format("%02d", id);
        this.ten = ten;
        this.d1 = d1;
        this.d2 = d2;
        this.d3 = d3;
        this.d4 = d4;
        this.d5 = d5;
        this.d6 = d6;
        this.d7 = d7;
        this.d8 = d8;
        this.d9 = d9;
        this.d10 = d10;
        this.tol = Math.round((d1 * 2 + d2 * 2 + d3 + d4 + d5 + d6
                    + d7 + d8 + d9 + d10) / 12 * 10.0) / 10.0;
    }

    public String getRank() {
        if(tol >= 9) return "XUAT SAC";
        else if(tol >= 8) return "GIOI";
        else if(tol >= 7) return "KHA";
        else if(tol >= 5) return "TB";
        else return "YEU";
    }
    @Override
    public int compareTo(Sinhvien other){
        if(this.tol == other.tol) return this.id.compareTo(other.id);
        return Double.compare(other.tol, this.tol);
    }
    @Override
    public String toString(){
        return String.format("%s %s %.1f %s", id, ten, tol, getRank());
    }
    
    
}
public class J05018_Bangdiemhocsinh {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Sinhvien[] ds = new Sinhvien[t];
        for(int i = 0; i < t; i++){
            ds[i] = new Sinhvien(i + 1, ip.nextLine(), ip.nextDouble(), 
                    ip.nextDouble(), ip.nextDouble(), ip.nextDouble(), ip.nextDouble(), 
                    ip.nextDouble(), ip.nextDouble(), ip.nextDouble(), ip.nextDouble(), ip.nextDouble());
            ip.nextLine();
        }
        Arrays.sort(ds);
        for(Sinhvien x : ds){
            System.out.println(x);
        }
    }
}   