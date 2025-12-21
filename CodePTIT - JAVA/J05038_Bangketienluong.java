import java.util.*;
import java.util.Arrays;

class Nhanvien{
    private String id, name, chuc;
    private int luong, day;
    public Nhanvien(int id, String name, int luong, int day, String chuc){
        this.id = "NV" + String.format("%02d", id);
        this.name = name;
        this.luong = luong;
        this.day = day;
        this.chuc = chuc;
    }
    public int luongthang(){
        return day * luong;
    }
    public int thuong(){
        int x = this.luongthang();
        if(this.day >= 25){
            return x * 20 / 100;
        }
        else if(this.day >= 22){
            return x * 10 / 100;
        }
        else return 0;
    }
    public int phucap(){
        if(this.chuc.equals("GD")){
            return 250000;
        }
        else if(this.chuc.equals("PGD")){
            return 200000;
        }
        else if(this.chuc.equals("TP")){
            return 180000;
        }
        else{
            return 150000;
        }
    }
    public int tol(){
        return this.luongthang() + this.thuong() + this.phucap();
    }
    public String toString(){
        return String.format("%s %s %d %d %d %d", id, name, this.luongthang(), this.thuong(),
                this.phucap(), this.tol());
    }
}
public class J05038_Bangketienluong {
    public public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        Nhanvien[] ds = new Nhanvien[t];
        for (int i = 0; i < t; i++) {
            String name = ip.nextLine();
            int l = ip.nextInt();
            int d = ip.nextInt();
            ip.nextLine();
            String s = ip.nextLine();
            ds[i] = new Nhanvien(i + 1, name, l, d, s);
        }
        int sum = 0;
        for(Nhanvien x : ds){
            System.out.println(x);
            sum += x.tol();
        }
        System.out.println("Tong chi phi tien luong: " + sum);
    }
}
