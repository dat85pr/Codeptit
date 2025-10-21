import java.util.*;
import java.util.Arrays;
class Sinhvien{
    private String msv, ten, lop, email;

    public Sinhvien(String msv, String ten, String lop, String email) {
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
    }

    public String getLop() {
        return lop;
    }
    
    @Override
    public String toString(){
        return String.format("%s %s %s %s", msv, ten, lop, email);
    }
}
public class J05022_Lietkesinhvientheolop {
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
        int q = ip.nextInt();
        ip.nextLine();
        while(q-- > 0){
            String check = ip.nextLine();
            System.out.println(String.format("DANH SACH SINH VIEN LOP %s:", check));
            for(Sinhvien x : ds){
                if(check.equals(x.getLop())){
                    System.out.println(x);
                }
            }
        }
    }
}   