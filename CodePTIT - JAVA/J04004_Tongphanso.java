import java.util.*;

class Phanso{
    private long tu, mau;
    public Phanso(){
        tu = 1;
        mau = 1;
    }
    public Phanso(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
        this.Rg();
    }
        public long getTu() {
        return tu;
    }
    public void setTu(long tu) {
        this.tu = tu;
    }
    public long getMau() {
        return mau;
    }
    public void setMau(long mau) {
        this.mau = mau;
    }
    public static long gcd(long a, long b) {
        if(a == 0) return 0;
        while(b != 0){
            long tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }
    public void Rg(){
        long tmp = gcd(tu, mau);
        tu /= tmp;
        mau /= tmp;
    }
    public void Tong(Phanso a, Phanso b){
        tu = a.tu * b.mau + b.tu * a.mau;
        mau = a.mau * b.mau;
        Rg();
    }
    @Override
    public String toString(){
        return String.format("%d/%d", tu, mau);
    }
}
public class J04004_Tongphanso {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        Phanso a = new Phanso(ip.nextLong(), ip.nextLong());
        Phanso b = new Phanso(ip.nextLong(), ip.nextLong());
        Phanso c = new Phanso();
        c.Tong(a, b);
        System.out.println(c);
    }
}