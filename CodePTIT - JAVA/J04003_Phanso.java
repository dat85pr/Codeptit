import java.util.*;

class Phanso{
    private long tu, mau;
    public Phanso(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
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
    public static long gcd(long tu, long mau) {
        if(tu == 0) return 0;
        while(mau != 0){
            long tmp = tu % mau;
            tu = mau;
            mau = tmp;
        }
        return tu;
    }
    @Override
    public String toString(){
        return String.format("%d/%d", tu / gcd(tu, mau), mau / gcd(tu, mau));
    }
}
public class J04003_Phanso {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        Phanso a = new Phanso(ip.nextLong(), ip.nextLong());
        System.out.println(a);
    }
}