import java.util.*;
import java.util.Arrays;
class Sinhvien implements Comparable<Sinhvien>{
    private String msv, ten, lop, email;

    public Sinhvien(String msv, String ten, String lop, String email) {
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
    }
    @Override
    public int compareTo(Sinhvien other){
        if(this.lop.equals(other.lop)){
            return this.msv.compareTo(other.msv);
        }
        return this.lop.compareTo(other.lop);       
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %s", msv, ten, lop, email);
    }
}
public class J05020_Sapxepsinhvientheolop {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Sinhvien[] ds = new Sinhvien[t];
        for(int i = 0; i < t; i++){
            String id = ip.nextLine();
            String name = ip.nextLine();
            String lop = ip.nextLine();
            String email = ip.nextLine();
            ds[i] = new Sinhvien(id, name, lop, email);
        }
        Arrays.sort(ds);
        for(Sinhvien x : ds){
            System.out.println(x);
        }
    }
}   