import java.util.*;
import java.util.Arrays;
class Sinhvien implements Comparable<Sinhvien>{
    private String  msv, name, lop, email, dn;
    private int id;
    public Sinhvien(int id, String msv, String name, String lop, String email, String dn) {
        this.id = id;
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.email = email;
        this.dn = dn;
    }

    public String getDn() {
        return dn;
    }
    @Override
    public int compareTo(Sinhvien other){
        return this.msv.compareTo(other.msv);
    }
    @Override
    public String toString(){
        return String.format("%d %s %s %s %s %s", id, msv, name, lop, email, dn);
    }
}
public class J05035_Danhsachthuctap2 {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        Sinhvien[] ds = new Sinhvien[t];
        for(int i = 0; i < t; i++){
            String msv = ip.nextLine();
            String name = ip.nextLine();
            String lop = ip.nextLine();
            String email = ip.nextLine();
            String dn = ip.nextLine();
            
            ds[i] = new Sinhvien(i + 1, msv, name, lop, email, dn);
        }
        Arrays.sort(ds);
        int q = ip.nextInt();
        ip.nextLine();
        while(q-- > 0){
            String s = ip.nextLine();
            for(Sinhvien x : ds){
                if(x.getDn().equals(s)){
                    System.out.println(x);
                }
            }
        }
    }
}   