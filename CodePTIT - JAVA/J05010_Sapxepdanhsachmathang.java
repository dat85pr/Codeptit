import java.util.*;
import java.util.Arrays;
class Mathang implements Comparable<Mathang>{
    private String name, nhom;
    private int id;
    private double buy, sell, benefit;

    public Mathang(int id, String name, String nhom, double buy, double sell) {
        this.id = id;
        this.name = name;
        this.nhom = nhom;
        this.buy = buy;
        this.sell = sell;
        this.benefit = sell - buy;
    }
    @Override
    public int compareTo(Mathang other){
        return Double.compare(other.benefit, this.benefit);
    }
    @Override
    public String toString(){
        return String.format("%d %s %s %.2f", id, name, nhom, benefit);
    }
}
public class J05010_Sapxepdanhsachmathang {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Mathang[] ds = new Mathang[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String nhom = ip.nextLine();
            double buy = ip.nextDouble();
            double sell = ip.nextDouble();
            ip.nextLine();
            ds[i] = new Mathang(i + 1, name, nhom, buy, sell);
        }
        Arrays.sort(ds);
        for(Mathang x : ds){
            System.out.println(x);
        }
    }
}   