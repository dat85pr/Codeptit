import java.util.*;

class Nhanvien{
    private String ma, ten, gt, ns, dc, mst, nkhd;
    public Nhanvien(){
        this("00001", "", "", "", "", "", "");
    }
    public Nhanvien(String ma, String ten, String gt, String ns, String dc, String mst, String nkhd) {
        this.ma = "00001";
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
        this.mst = mst;
        this.nkhd = nkhd;
    }
    @Override
    public String toString(){
        return ma + " " + ten + " " + gt + " " + ns + " " + dc +
                " " + mst + " " + nkhd;
    }
}

public class J04007_Khaibaolopnhanvien {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        String ten = ip.nextLine();
        String gt = ip.nextLine();
        String ns = ip.nextLine();
        String dc = ip.nextLine();
        String mst = ip.nextLine();
        String nkhd = ip.nextLine();
        Nhanvien a = new Nhanvien("00001", ten, gt, ns, dc, mst, nkhd);
        System.out.println(a);
    }
}