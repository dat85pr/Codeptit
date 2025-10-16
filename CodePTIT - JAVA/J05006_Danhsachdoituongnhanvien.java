import java.util.*;
import static java.lang.Math.*;
class Nhanvien{
    private String id, name, gt, ns, dc, nkhd, mst;
    
    public Nhanvien(int id, String name, String gt, String ns, String dc, String mst, String nkhd) {
        this.id = String.format("%05d", id);
        this.name = name;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
        this.nkhd = nkhd;
        this.mst = mst;
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %s %s %s %s", id, name, gt, ns, dc, mst, nkhd);
    }
}
public class J05006_Danhsachdoituongnhanvien {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Nhanvien[] a = new Nhanvien[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String gt = ip.nextLine();
            String ns = ip.nextLine();
            String dc = ip.nextLine();
            String mst = ip.nextLine();
            String nkhd = ip.nextLine();
            a[i] = new Nhanvien(i + 1, name, gt, ns, dc, mst, nkhd);
        }
        for(Nhanvien x : a){
            System.out.println(x);
        }
    }
}