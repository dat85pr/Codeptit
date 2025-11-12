import java.util.*;
import java.util.Arrays;
class Mathang{
    private String id, name, dvi;
    private int nhap, sl; 
    private long vch, tt, gb;

    public Mathang(int id, String name, String dvi, int nhap, int sl) {
        this.name = name;
        this.dvi = dvi;
        this.id = "MH" + String.format("%02d", id);
        this.nhap = nhap;
        this.sl = sl;
        this.vch = Math.round((this.nhap * this.sl) * 0.05);
        this.tt = Math.round(this.nhap * this.sl + this.vch);
        this.gb = Math.round(this.tt + this.tt * 0.02);
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %d %d %d", id, name, dvi, vch, tt, gb);
    }
}
public class J05036_Tinhgiaban1 {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        Mathang[] ds = new Mathang[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String vch = ip.nextLine();
            int x = ip.nextInt();
            int y = ip.nextInt();
            ip.nextLine();
            ds[i] = new Mathang(i + 1, name, vch, x, y);
        }
        for(Mathang x : ds){
            System.out.println(x);
        }
    }
}   